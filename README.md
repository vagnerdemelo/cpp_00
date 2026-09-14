# C++ Module 00

Implementação do **Módulo 00 de C++** do currículo *Common Core* da [42 São Paulo](https://www.42sp.org.br/). Este módulo apresenta a transição de C para C++, com foco em entrada e saída padrão, classes, encapsulamento e organização básica de código orientado a objetos.

## Conteúdos praticados

- Compilação em C++98;
- `std::cout`, `std::cin` e `std::string`;
- Classes, atributos privados e métodos públicos;
- Construtores;
- Encapsulamento;
- Arrays de objetos;
- `iomanip` para formatação de tabelas.

## Estrutura

```
.
├── ex00/                 # Megaphone
│   ├── megaphone.cpp
│   └── Makefile
├── ex01/                 # PhoneBook
│   ├── headers/
│   ├── src/
│   └── Makefile
└── pt_br.subject.pdf     # Enunciado do módulo
```

## Exercício 00 — Megaphone

O programa recebe argumentos pela linha de comando e os imprime em maiúsculas. Quando executado sem argumentos, exibe uma mensagem de ruído.

### Compilar e executar

```bash
cd ex00
make
./megaphone "hello, 42!"
```

Saída esperada:

```text
HELLO, 42!
```

Sem argumentos:

```bash
./megaphone
```

```text
* LOUD AND UNBEARABLE FEEDBACK NOISE *
```

## Exercício 01 — PhoneBook

Uma agenda de contatos executada no terminal. Cada contato possui nome, sobrenome, apelido, telefone e segredo mais obscuro. A agenda guarda até oito contatos; ao adicionar um nono, o mais antigo é substituído.

### Compilar e executar

```bash
cd ex01
make
./phonelist
```

Também é possível executar diretamente após a compilação:

```bash
make run
```

### Comandos disponíveis

| Comando | Descrição |
| --- | --- |
| `ADD` | Solicita os cinco campos e adiciona um contato. Campos vazios não são aceitos. |
| `SEARCH` | Exibe a tabela de contatos e permite consultar um contato pelo índice. |
| `HELP` | Mostra as instruções do programa. |
| `EXIT` | Encerra a agenda. |

Na visualização de `SEARCH`, nome, sobrenome e apelido ocupam dez caracteres. Campos maiores são truncados e terminam com `.`.

## Makefile

Cada exercício possui os alvos abaixo:

```bash
make        # compila o executável
make clean  # remove arquivos objeto
make fclean # remove objetos e executável
make re     # recompila do zero
```

O exercício `ex01` também oferece `make run`.

## Requisitos

- Compilador C++ compatível com C++98;
- `make`.

Os projetos são compilados com:

```text
-Wall -Wextra -Werror -std=c++98
```

## Autoria

Desenvolvido por **vade-mel**([Vagner Melo](https://github.com/vagnerdemelo)) como parte da formação na 42 São Paulo.
