CREATE SCHEMA `sus` ;

CREATE TABLE `sus`.`pacientes` (
  `idpacientes` INT NOT NULL AUTO_INCREMENT,
  `pacientes_nome` VARCHAR(80) NULL,
  `pacientes_codeSgrSoc` INT(11) NULL,
  `pacientes_idade` INT(3) NULL,
  PRIMARY KEY (`idpacientes`));
  
  