#include <stdio.h>
int compra(){
    int itens = 3;
    printf("Você comprou %d itens\n", itens);
    return itens;
}

int main(){
    compra ();
    return 0;
}