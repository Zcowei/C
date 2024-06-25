#include <stdio.h>
int main(){
    int a=100;
    int b=2;
    
    int soma=a+b;
    int subtracao=a-b;
    int multiplicacao=a*b;
    int divisao=a/b;
    
    printf("Dado os valores de a=100 e b=2:\n");
    printf("a + b = %d\n", soma);
    printf("a - b = %d\n", subtracao);
    printf("a * b = %d\n", multiplicacao);
    printf("a / b = %d\n", divisao);
     
    return 0;
}