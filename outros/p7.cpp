#include<stdio.h>
#include<stdlib.h>

int main()
{
float ht, he, vnormal, vextra, vtotal;
printf("Horas Trabalhadas: ");
scanf("%f", &ht);
if (ht <= 50)
{
vnormal = ht * 10;
vextra = 0;
vtotal = vnormal;
}
else
{
vnormal = 500;
he = ht - 50;
vextra = he * 20;
vtotal = vnormal + vextra;
}
printf("\n\nValor total das horas normais: %f", vnormal);
printf("\nValor ganho por horas excedentes: %f", vextra);
printf("\nSalário total: %f", vtotal);
system("pause");
}
