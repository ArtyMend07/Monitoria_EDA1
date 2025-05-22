#include <stdio.h>
#include <stdlib.h>


typedef struct Tabela{
    int id;
    int idade;
    char nome[80];
    char telefone[20];
}Tabela;

void salvarAgendaArquivo(Tabela *ptr, int tamanho, const char *nomeArquivo) {
    FILE *arquivo = fopen(nomeArquivo, "w");
    if (!arquivo) {
        printf("Erro ao abrir arquivo para escrita.\n");
        return;
    }
    for (int i = 0; i < tamanho; i++) {
        
        fprintf(arquivo, "Id: %d\n Idade: %d\n Nome: %s\n Telefone: %s\n\n", ptr[i].id, ptr[i].idade, ptr[i].nome, ptr[i].telefone);
    }
    fclose(arquivo);
    printf("Agenda salva em '%s'\n", nomeArquivo);
}


void CriarAgenda(Tabela *ptr, int tamanho, int id, int idade, char nome[], char telefone[]){
    ptr[tamanho].id = id;
    ptr[tamanho].idade = idade;
    
    int i;
    for(i = 0; nome[i] != '\0'; i++){
        ptr[tamanho].nome[i] = nome[i];
    }
    ptr[tamanho].nome[i] = '\0';

    for(i = 0; telefone[i] != '\0'; i++){
        ptr[tamanho].telefone[i] = telefone[i];
    }
    ptr[tamanho].telefone[i] = '\0';
    
    printf("Agenda de Id: %d criada\n", ptr[tamanho].id);
}

int BuscarAgenda(Tabela *ptr, int id, int tamanho){
    for(int i = 0; i < tamanho; i++){
        if(ptr[i].id == id){ //não é ptr[id]==id
            return i;
        }    
    }
    return -1;
}

void MostrarAgenda(Tabela *ptr, int indice){
    printf("Nome: %s\n", ptr[indice].nome);
    printf("Telefone: %s\n", ptr[indice].telefone);
    printf("Idade: %d\n", ptr[indice].idade);
    printf("Id: %d\n", ptr[indice].id);
}


void RemoverAgenda(Tabela *ptr, int indice, int tamanho){
    Tabela aux = ptr[tamanho-1];
    ptr[tamanho-1] = ptr[indice];
    ptr[indice] = aux;
    printf("Agenda com id %d removido\n", ptr[indice].id);
}

int main(){
    int quantidade;
    int opcao;
    int idade, id = 0, prox_id = 1;
    char nome[80];
    char telefone[20];
    int tamanho = 0;

    printf("Escolha o tamanho da agenda: \n");
    scanf(" %d", &quantidade);
    Tabela *ptr = (Tabela* )malloc(sizeof(Tabela) * quantidade); 
    while(1){
        
        printf("Escolha uma opção: \n");
        printf("1. Criar agenda\n");
        printf("2. Buscar agenda\n");
        printf("3. Deletar agenda\n");
        printf("4. Sair\n");
        scanf(" %d", &opcao);
        if(opcao == 1){
            if(tamanho>=quantidade){
                printf("Já tem muita agenda, exclua alguma\n");
            }
            else{
                printf("Digite o nome: \n");
                scanf(" %s", &nome);
                printf("Digite o telefone: \n");
                scanf(" %s", &telefone);
                printf("Digite a idade: \n");
                scanf(" %d", &idade);
                CriarAgenda(ptr,tamanho, prox_id, idade, nome, telefone);
                tamanho++;
                prox_id++;
            }
        }
        else if(opcao == 2){
            printf("Digite o id: \n");
            scanf(" %d", &id);
            int busca = BuscarAgenda(ptr, id, tamanho);
            if(busca != -1){
                MostrarAgenda(ptr, busca);
                
            }
            else{
                printf("Id não encontrado\n");
            }
        }
        else if(opcao == 3){
            printf("Digite o id: \n");
            scanf(" %d", &id);
            int busca = BuscarAgenda(ptr, id, tamanho);
            if (busca != -1){
                RemoverAgenda(ptr, busca, tamanho);

                tamanho --;
            }
            else{
                printf("Id não encontrado\n");
            }
        }
        else if(opcao == 4){
            salvarAgendaArquivo(ptr, tamanho, "agenda.txt");
            free(ptr);
            break;
        }
        else{
            printf("Número inválido.\n");
        }
        
    }
    return 0;
}