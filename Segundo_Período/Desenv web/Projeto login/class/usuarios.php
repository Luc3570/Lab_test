<?php

    Class Usuario {

        private $pdo;
        private $msg;

        public function conectar() {

            global $pdo;
            global $msg;

            try {
                $pdo = new PDO("jdbc:mysql://localhost:3306/estacio", "root","root");
                echo "Connected successfully";
            } catch (PDOException $erro) {
                echo "Connection failed: " . $erro->getMessage();

            }
        }

        public function cadastrar($nome, $telefone, $email, $senha) {
           global $pdo;

           $sql = $pdo->prepare("SELECT id FROM usuarios WHERE login = :e");
           $sql->bindvalue(":e",$email);
           $sql->execute();

           if ($sql->rowCount() > 0) {
               return false;
           } else {
               $sql = $pdo->prepare("INSERT INTO usuarios (nome, telefone, login, senha) VALUES (:n, :t, :e, :s)");
               $sql->bindValue(":n", $nome);
               $sql->bindValue(":t", $telefone);
               $sql->bindValue(":e", $email);
               $sql->bindValue(":s", md5($senha));
               $sql->execute();
               return true;
           }

        }
    }
?>
