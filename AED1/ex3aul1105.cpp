#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char aluno1[10] = "Maria", aluno2[10] = "Jose", aux[10];

    strcpy(aux, aluno2);
    strcpy(aluno2, aluno1);
    strcpy(aluno1, aux);
    printf("Aluno 1: %s", aluno1);
    printf("Aluno 2: %s", aluno2);
    system("pause");
}
    
