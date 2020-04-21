#include <stdio.h>
#include <stdlib.h>
main(){
    FILE *fp;
    /*double d = 12.23;
    int i = 101;
    long l = 123023L;*/
    if ((fp=fopen("dados.dat", "rb+")) == NULL) {   
        printf("arquivo não pode ser aberto\n");  
        exit(1);
    }
    rewind(fp);
    int fseek (FILE *fp,long numbytes,int origem);
    fread(&d, sizeof(double), 1, fp);
    fread(&i, sizeof(int), 1, fp);
    fread(&l, sizeof(long), 1, fp);
    printf("%f %d %ld", d, i, l);
    fclose(fp);
    system("pause");
}
