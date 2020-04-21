#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main(){
    FILE *fp;
    double d = 12.23;
    int i = 101;
    long l = 123023L;
    char c[10]="perses\n";
    //strcpy(c, "carai");
    //c = 'c';
    if ((fp=fopen("porra.txt", "r+")) == NULL) {   
    if((fp=fopen("porra.txt", "w+")) == NULL){
    	printf("deu nao");
	}
        
    }
 
 
    fwrite(&c, sizeof(char[10]), 1, fp);
    /*fwrite(&i, sizeof(int), 1, fp);
    fwrite(&l, sizeof(long), 1, fp);
 
    /*fread(&d, sizeof(double), 1, fp);
    fread(&i, sizeof(int), 1, fp);
    fread(&l, sizeof(long), 1, fp);
    printf("%f %d %ld", d, i, l);*/
    fclose(fp);
    system("pause");
}
