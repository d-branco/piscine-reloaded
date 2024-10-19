# Piscine Reloaded
This is the code from the warm up week that precides the Common Core from the 42 shcool.

Bellow there are some notes in various languages.

## Evaluation
ex00: :white_check_mark: | ex01: :white_check_mark: | ex02: :white_check_mark: | ex03: :white_check_mark: | ex04: :white_check_mark: | ex05: :white_check_mark: | ex06: :white_check_mark: | ex07: :white_check_mark: | ex08: :white_check_mark: | ex09: :white_check_mark: | ex10: :white_check_mark: | ex11: :white_check_mark: | ex12: :white_check_mark: | ex13: :white_check_mark: | ex14: :x: | ex15: :white_check_mark: | ex16: :white_check_mark: | ex17: :white_check_mark: | ex18: :white_check_mark: | ex19: :white_check_mark: | ex20: :white_check_mark: | ex21: :white_check_mark: | ex22: :white_check_mark: | ex23: :white_check_mark: | ex24: :white_check_mark: | ex25: :white_check_mark: | ex26: :white_check_mark: | ex27: :white_check_mark:

## shell
#### touch
Criar um ficheiro
`touch qualquer_ficheiro.extension`

Alterar a data de um ficheiro para 1 de Junho aas 20h47
`touch -t 06012047 ficheiro.ext`

alternativamente, para um link
`touch -t 06012047 ficheiro.ext -h`

#### ln
Criar um atalho
`ln -s original_existente atalho_novo`

Cria um ficheiro ligado
`ln -n ficheiro_origianl novo_ficheiro`

#### truncate
Corta um ficheiro para um tamanho 225 bytes
`truncate fihceiro.ext -s 225`
#### chmod
Altera as permissoes do ficheiro
`chmod 777 ficheiro.ext`
`chmod u+w ficheiro.ext`

#### find
Procura na pasta actual e subpastas
`find . qualquer_coisa`

Procura por ficheiros
`find -type f -name "nome_do_ficheiro"`

Procura lista e apaga ficheiros terminados com til
`find type f -name "*~" -print -delete`

#### grep
Encontra os enderecos MAC com regex
`ifconfig | grep -o -E '([A-Z0-9a-z]{2}:){4}[A-Z0-9a-z]{2}'`

## C
Como incluir funcoes de outros ficheiros?
1. Incluir o prototipo da funcao;
2. Incluir o ficheiro ao compilar.

## Makefile
#### Recommended reading
[makefile tutorial](https://makefiletutorial.com/)

#### Didatic examples
```make
targets: prerequisites
	command
	command
	command
```
