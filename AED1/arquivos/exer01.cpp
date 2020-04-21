#include <stdio.h>
#include <stdlib.h>

main(){
    FILE *p;
    int v[10], x=0, i=0;
    p=fopen("c:\\exemplo\\vetor.perses","a");
    if(p==NULL){
        printf("\nErro na abertura");
    }else{
        for(x=0;x<10;x++){
            printf("\nvalor: ");
            scanf("%d", &v[x]);
            fprintf(p,"%d\n",v[x]);
            //putc(i,p);
            /*if(ferror(p)){
                printf("\nErro na gravacao do caractere");
            }else{
                printf("\nGravacao realizada com sucesso");
            }*/
        }
    }
    system("pause");
    fclose(p);
}
