#include <stdio.h>

char habilidade(){
    char usarHabilidade = 's';
    while (usarHabilidade== 's'){
        printf ("Você deseja usar Kamehameha?\n");
        scanf ("%s", &usarHabilidade);
        if (usarHabilidade == 's'){
        printf("Você usou Kamehameha!\n");

    }
}
printf ("Você derrotou a calvície!\n");
return usarHabilidade;
}
int main (){
    habilidade();
    return 0;
}