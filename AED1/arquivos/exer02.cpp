#include <stdio.h>
#include <stdlib.h>

main(){
    FILE *p;
    char carac,x;
    int vl, i=0, v[5];
    p=fopen("c:\\exemplo\\vetor.perses","r");
    /*if(p==NULL){
        printf("\nErro na abertura");
    }else{
        while(!feof(p)){
            vl=fscanf(p,"%d\n");
            if(ferror(p))
                printf("\nErro na leitura do caractere");
            else{
                printf("\nLeitura realizada com sucesso");
                printf("\nCaracter lido %d",vl);
            }
        }*/
            fscanf(p,"%d\n%d\n%d\n%d\n%d\n", v[0], v[1], v[2], v[3], v[4]);
            for(i=0;i<5;i++){
                printf("%d\n",v[i]);
            }
    //}
    system("pause");
    //fclose(p);
}
