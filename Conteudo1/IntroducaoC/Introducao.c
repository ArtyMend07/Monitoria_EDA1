#include <stdio.h>
#include <stdlib.h>


int a = 10;
float b = 5.2;
double d = 5.3;
char c = 't';

int pegaNum(){
    int num;
    scanf(" %d", &num);
    return num;
}
int main(){
    int num = pegaNum();
    printf("Número: %d\n", num);
    char nome[7] = {'p','e','d','r','o'};
    // {'p','e','d','r','o','\0','\0'}
    printf("Nome: ");
    for(int i = 0; i<7; i++){
        
        printf("%c", nome[i]);
    }
    return 0;

}