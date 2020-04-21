#include <stdio.h>
#include <stdlib.h>
    
int main()
{
        
printf("1 - canditato1");
printf("\n2 - canditato2");
printf("\n3 - canditato3");
printf("\n4 - canditato4");
printf("\n0 - branco\n\n");

int num, x, cand1, cand2, cand3, cand4, nulo, branco;
cand1 = 0;
cand2 = 0;
cand3 = 0;
cand4 = 0;
nulo = 0;
branco = 0;
                                        
for (x=0;x<3;x++)
{
printf("Numero do candidato: ");
scanf("%d", &num);
if (num == 1)
{
cand1 = cand1 + 1;
}

if (num == 2)
{
cand2 = cand2 + 1;
}
  
if (num == 3)
{
cand3 = cand3 + 1;
}

if (num == 4)
{
cand4 = cand4 + 1;
}

if (num == 0)
{
branco = branco + 1;
}
if (num > 4)
{
nulo = nulo + 1;
}
}


    printf("\n\n\ncanditado 1: %d", cand1);
    printf("\ncanditado 2: %d", cand2);
    printf("\ncanditado 3: %d", cand3);
    printf("\ncanditado 4: %d", cand4);
    printf("\nbrancos: %d", branco);
    printf("\nNulos: %d", nulo);
    system("pause");
}
