# Atividade: Criador e Gerenciador de Agenda em C

## Objetivo

O objetivo desta atividade é desenvolver um programa em linguagem C que funcione como uma agenda simples, onde o usuário pode **criar**, **buscar**, **remover** contatos, e **salvar automaticamente** os dados da agenda em um arquivo texto ao finalizar o programa.

Este exercício visa consolidar seus conhecimentos em:

- Manipulação de **estruturas** (`struct`) para organizar dados complexos.
- Uso de **ponteiros** e alocação dinâmica de memória (`malloc` e `free`).
- Leitura e escrita em arquivos com a biblioteca padrão do C (`stdio.h`).
---

## Regras e Requisitos

1. **Estrutura de Dados:**

   A agenda deve armazenar os contatos em uma estrutura chamada `Tabela`, que contém os seguintes campos:

   - `id`: identificador único gerado automaticamente para cada contato.
   - `idade`: idade do contato.
   - `nome`: string com até 79 caracteres.
   - `telefone`: string com até 19 caracteres.

2. **Funcionalidades Implementadas:**

   - **Criar contato:** O usuário informa nome, telefone e idade, e um `id` é gerado automaticamente para este contato. O programa deve impedir que a agenda ultrapasse o tamanho máximo definido pelo usuário.
   - **Buscar contato:** Permite buscar um contato pelo `id` e mostrar os dados completos.
   - **Remover contato:** Permite remover um contato pelo `id`. Para manter a compactação do vetor, o último contato da agenda é movido para a posição do contato removido.
   - **Salvar agenda em arquivo texto:** Ao escolher a opção de sair, o programa deve salvar todos os contatos existentes no arquivo `agenda.txt` no formato legível, contendo `Id`, `Idade`, `Nome` e `Telefone` de cada contato.

3. **Interação com o usuário:**

   - O programa deve apresentar um menu com as opções:
     1. Criar agenda
     2. Buscar agenda
     3. Deletar agenda
     4. Sair (salvando a agenda em arquivo)
   - O programa deve aceitar entradas válidas e tratar entradas inválidas com mensagens apropriadas.

4. **Alocação dinâmica:**

   - O usuário informa o tamanho máximo da agenda no início do programa.
   - A memória para armazenar os contatos deve ser alocada dinamicamente conforme o tamanho informado.
   - Ao sair, a memória deve ser liberada corretamente.

5. **Formato do arquivo salvo (`agenda.txt`):**

   O arquivo deve ter uma saída formatada assim: 

Id: 1
Nome: João Silva
Telefone: 9999-8888
Idade: 25

Id: 2
Nome: Maria Santos
Telefone: 9888-7777
Idade: 30

[![Link pro vídeo](https://www.youtube.com/embed/watch?v=-6MbP7AWYlM)](https://www.youtube.com/embed/watch?v=-6MbP7AWYlM)
