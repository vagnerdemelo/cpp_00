# C++ Module 00

Implementação do **Módulo 00 de C++** do currículo *Common Core* da [42 São Paulo](https://www.42sp.org.br/). Este módulo apresenta a transição de C para C++, com foco em entrada e saída padrão, classes, encapsulamento e organização básica de código orientado a objetos.

## Conteúdos praticados

- Compilação em C++98;
- `std::cout`, `std::cin` e `std::string`;
- Classes, atributos privados e métodos públicos;
- Construtores;
- Destrutores e membros estáticos;
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
├── ex02/                 # Account
│   ├── Account.cpp
│   ├── Account.hpp
│   ├── tests.cpp
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

### Comandos disponíveis

| Comando | Descrição |
| --- | --- |
| `ADD` | Solicita os cinco campos e adiciona um contato. Campos vazios não são aceitos. |
| `SEARCH` | Exibe a tabela de contatos e permite consultar um contato pelo índice. |
| `EXIT` | Encerra a agenda. |

Na visualização de `SEARCH`, nome, sobrenome e apelido ocupam dez caracteres. Campos maiores são truncados e terminam com `.`.

## Exercício 02 — Account

O exercício simula a reconstrução de um arquivo perdido em um sistema bancário. A partir de `Account.hpp`, `tests.cpp` e de um log de referência fornecidos pelo projeto, o objetivo é recriar `Account.cpp` de modo que sua saída corresponda ao log, com exceção dos timestamps.

A classe `Account` representa contas individuais e registra seus saldos, depósitos e saques. Seus membros estáticos mantêm dados compartilhados por todas as instâncias, como o número de contas, o saldo total e a quantidade total de operações. Criação, consulta, movimentação e encerramento das contas são exibidos com timestamp; saques acima do saldo disponível são recusados.

### Compilar e executar os testes

```bash
cd ex02
make test
./Test
```

O programa de teste cria oito contas, realiza depósitos e tentativas de saque e exibe o estado individual e consolidado das contas. Saques acima do saldo disponível são recusados.

> **Importante:** apesar de o `Makefile` definir o alvo padrão `all`, ele tenta gerar o executável `Account` somente a partir de `Account.cpp`. Como esse arquivo implementa a classe e não possui uma função `main()`, `make` e `make all` falham na etapa de linkedição. Para compilar o exercício com a `main()` fornecida em `tests.cpp`, use `make test` e execute `./Test`.

## Makefile

Os exercícios `ex00` e `ex01` possuem os alvos abaixo:

```bash
make        # compila o executável
make clean  # remove arquivos objeto
make fclean # remove objetos e executável
make re     # recompila do zero
```

No `ex02`, use `make test` para gerar o executável `Test`. Os alvos `clean` e `fclean` removem os arquivos objeto e os executáveis, enquanto `make`/`make all` e `make re` não concluem a linkedição por não incluírem `tests.cpp`, onde está a função `main()`.

## Requisitos

- Compilador C++ compatível com C++98;
- `make`.

Os projetos são compilados com:

```text
-Wall -Wextra -Werror -std=c++98
```

## Autoria

Desenvolvido por **vade-mel**([Vagner Melo](https://github.com/vagnerdemelo)) como parte da formação na 42 São Paulo.
