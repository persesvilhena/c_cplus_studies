#include <stdio.h>
#include <stdlib.h>

void resolve(int *a, int *b, int *c){
     int soma=0, mult=0, maior=0;
     soma = *a + *b + *c;
     mult = *a * *b * *c;
     if(*a > maior){
         maior = *a;
     }
     if(*b > maior){
         maior = *b;
     }
     if(*c > maior){
         maior = *c;
     }
     *a = soma;
     *b = mult;
     *c = maior;
}

main(){
    int *a, *b, *c, aa, bb, cc;
    scanf("%d", &aa);
    scanf("%d", &bb);
    scanf("%d", &cc);
    a = &aa;
    b = &bb;
    c = &cc;
    resolve(a, b, c);
    printf("\n%d\n%d\n%d\n", *a, *b, *c);
    system("pause");
}
