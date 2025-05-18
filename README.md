# Monitoria_EDA1

## Sobre o Projeto

Este repositório reúne códigos, exemplos e exercícios utilizados na monitoria de Estruturas de Dados e Algoritmos 1 (EDA1). O objetivo é auxiliar estudantes com exemplos práticos e organizados por temas.

### Organização do Projeto

```text
Monitoria_EDA1/
├── Conteudo1/
│   ├── IntroducaoC/
│   │   ├── *.c
│   │   └── *.exe
│   └── struct/
│       ├── struct.c
│       └── struct.exe
├── .gitignore
├── README.md
```

- **Conteudo1/IntroducaoC/**: Exemplos introdutórios em C, como operadores, if-else e outros conceitos básicos.
- **Conteudo1/struct/**: Exemplos e exercícios relacionados a estruturas (structs) em C.

Arquivos `.exe` são gerados das versões `.c` para facilitar testes rápidos.

## Como Rodar os Arquivos

### Windows

1. **Instale o GCC**:
   - Baixe o MinGW em: https://osdn.net/projects/mingw/releases/
   - Durante a instalação, selecione o pacote `mingw32-gcc-g++`.
   - Adicione o caminho `C:\MinGW\bin` à variável de ambiente `PATH`.
   - Para verificar, abra o Prompt de Comando e digite:
     ```sh
     gcc --version
     ```

2. **Compile um arquivo C**:
   ```sh
   gcc nome_do_arquivo.c -o nome_do_arquivo.exe
   ```

3. **Execute o programa**:
   ```sh
   nome_do_arquivo.exe
   ```

### Linux

1. **Instale o GCC** (caso não tenha):
   ```sh
   sudo apt update
   sudo apt install build-essential
   ```

2. **Compile um arquivo C**:
   ```sh
   gcc nome_do_arquivo.c -o nome_do_arquivo
   ```

3. **Execute o programa**:
   ```sh
   ./nome_do_arquivo
   ```

## Histórico de Versões

| Versão  | Descrição                        | Autor                                                                 | Data         |
|---------|----------------------------------|-----------------------------------------------------------------------|--------------|
| 1.0  | Commit inicial do projeto        | [Artur Mendonça](https://github.com/ArtyMend07)                      | 18/05/2025  |
| 1.1  | Adição do arquivo `struct.c`     | [Artur Mendonça](https://github.com/ArtyMend07)                      | 18/05/2025   |
| 1.2  | Atualização da README     | [Artur Mendonça](https://github.com/ArtyMend07)                      | 18/05/2025   |

---