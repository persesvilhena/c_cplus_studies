#include <stdio.h>
#include <stdlib.h>

int primo(int num){
    int i, c = 0;
    for (i=1; i<=num; i++){
        if(num % i == 0){
            c++;
        }
    }
    if(c == 2){
        return (1);
    }else{
        return (0);
    }
}
main(){
    int *vetor;
    vetor = (int *)malloc(10 * sizeof(int));
    int x=0, i = 100, j = 0;

    while(x<10){
        if(primo(i) == 1){
            vetor[x] = i;
            x++;
        }
        i++;
    }
    for(j=0; j<10; j++){
        printf("Vetor %d: %d\n", j, vetor[j]);
    }
    system("pause");
    free(vetor);
}
