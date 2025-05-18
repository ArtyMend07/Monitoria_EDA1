#include <stdio.h>

typedef struct Pessoa{
    int idade;
    float altura;
    char nome[100];
}Pesso;

Pesso CriarPessoa(int idade, float altura, char nome[]){
    Pesso p;
    p.idade = idade;
    p.altura = altura;
    for(int i = 0; i<100; i++){
        p.nome[i] = nome[i];
        if (nome[i] == '\0'){
            break;
        }
    }
    return p;
}

void ImprimirNome(Pesso pes){
    for(int i = 0; i<100; i++){
        printf("%c", pes.nome[i]);
        if (pes.nome[i] == '\0'){
            printf("\n");
            break;
        }
    }
}

int main(){
    Pesso p1 = {18, 1.78, {'j','o','a','o','\0'}};
    Pesso p2, p3;
    p2.altura = 1.67;
    p2.idade = 23;
    p2.nome[0] = 'a';
    p2.nome[1] = 'n';
    p2.nome[2] = 'a';
    p2.nome[3] = '\0';
    p3 = CriarPessoa(37, 1.85, "Marcelo");
    ImprimirNome(p1);
    ImprimirNome(p2);
    ImprimirNome(p3);
    printf("%.2f\n", p2.altura);
    printf("%d\n", p3.idade);
}