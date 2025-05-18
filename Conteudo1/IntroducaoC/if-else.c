#include <stdio.h>

int main() {
    int numero;
    scanf("%d", &numero);
    if (numero > 0){
        printf("Positivo");
    }
    else if (numero < 0){
        printf("Negativo");
    }
    else{
        printf("zero");
    }
    return 0;
}
