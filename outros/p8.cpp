#include <stdio.h>
#include <stdlib.h>

int main()
{
int pesom = 0, pesoh = 0, totalpesom = 0, totalpesoh = 0, totalidadem = 0, totalidadeh = 0, mediapesoh = 0, mediaidadeh = 0, mediapesom = 0, mediaidadem = 0;
int opcao = 0, idadem = 0, idadeh = 0, loopm = 0, looph = 0, sair = 0, idadem25 = 0;

while(sair == 0)
{
printf("Sexo: Digite 1 para HOMENS ou 2 para MULHERES: ");
scanf("%d", &opcao);
if (opcao == 1)
{
printf("Idade: ");
scanf("%d", &idadeh);
printf("Peso: ");
scanf("%d", &pesoh);
totalidadeh = totalidadeh + idadeh;
totalpesoh = totalpesoh + pesoh;
looph = looph + 1;
}
else
{
printf("Idade: ");
scanf("%d", &idadem);
printf("Peso: ");
scanf("%d", &pesom);
totalidadem = totalidadem + idadem;
totalpesom = totalpesom + pesom;
loopm = loopm + 1;
if (idadem > 25)
{
idadem25 = idadem25 + 1;
}
}
//if (opcao > 2)
//{
//printf("Erro: escolha do sexo");
//}
//if (opcao < 1)
//{
//printf("Erro: escolha do sexo");
//}
//printf("digite 1 para sair");
//scanf("%d", &sair);
printf("Digite 0 para continuar");
scanf("%d", &sair);
}
mediapesoh = totalpesoh / looph;
mediaidadeh = totalidadeh / looph;
mediapesom = totalpesom / loopm;
mediaidadem = totalidadem / loopm;
printf("\n\nMedia peso dos homens: %d", mediapesoh);
printf("\nMedia idade dos homens: %d", mediaidadeh);
printf("\nMedia peso das mulheres: %d", mediapesom);
printf("\nMedia idade das mulheres: %d", mediaidadem);
printf("\nMulheres acima de 25 anos: %d", idadem25);
system("pause");
}
