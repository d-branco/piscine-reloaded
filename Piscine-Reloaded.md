# Notas acerca da Piscine
Muito bem, estou agora a adicionar novas notas ao meu ficheiro de notas markdown. Aque ee suposto ter tudo o que haa de aprendizagem da Piscine.

## Dicas
#### teclado
Como corrigir o teclado do ubuntu
`loadkeys pt-latin1`

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
