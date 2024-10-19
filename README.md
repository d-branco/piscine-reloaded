# Piscine Reloaded
This is the code from the warm up week that precides the Common Core from the 42 shcool.

Bellow there are some notes in various languages.

## Evaluation
![alt text](2024-10-19_at_15-01-25C-piscine-reloaded.png)

ex00: :white_check_mark: | ex01: :white_check_mark: | ex02: :white_check_mark: | ex03: :white_check_mark: | ex04: :white_check_mark: | <br>ex05: :white_check_mark: | ex06: :white_check_mark: | ex07: :white_check_mark: | ex08: :white_check_mark: | ex09: :white_check_mark: | <br>ex10: :white_check_mark: | ex11: :white_check_mark: | ex12: :white_check_mark: | ex13: :white_check_mark: | ex14: :white_check_mark: | <br>ex15: :white_check_mark: | ex16: :white_check_mark: | ex17: :white_check_mark: | ex18: :white_check_mark: | ex19: :white_check_mark: | <br>ex20: :white_check_mark: | ex21: :white_check_mark: | ex22: :white_check_mark: | ex23: :white_check_mark: | ex24: :white_check_mark: | <br>ex25: :white_check_mark: | ex26: :white_check_mark: | ex27: :white_check_mark:

## Makefile
#### Recommended reading
[makefile tutorial](https://makefiletutorial.com/)

## C
How to include function from other files?
1. Include the function prototype;
2. Include the file while compiling.

## shell
#### touch
Create a file
```shell
touch qualquer_ficheiro.extension
```

Change the date to 1 de June at 20h47
```shell
touch -t 06012047 ficheiro.ext
```

alternative, for a link
```shell
touch -t 06012047 ficheiro.ext -h
```

#### ln
Create a shortcut
```shell
ln -s original_existente atalho_novo
```

Create a linked file
```shell
ln -n ficheiro_origianl novo_ficheiro
```

#### truncate
Cut a file up to a size of 225 bytes
```shell
truncate fihceiro.ext -s 225
```

#### chmod
Change the permission of a file
```shell
chmod 777 ficheiro.ext
```
```shell
chmod u+w ficheiro.ext
```

#### find
Search in this folder and in subfolders
```shell
find . qualquer_coisa
```

Search for names by file
```shell
find -type f -name "nome_do_ficheiro"
```

Search, list and, delete files ending in a tilde
```shell
find type f -name "*~" -print -delete
```

#### grep
Find MAC adresses with regex
```shell
ifconfig | grep -o -E '([A-Z0-9a-z]{2}:){4}[A-Z0-9a-z]{2}'
```
