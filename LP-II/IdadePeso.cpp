#include <stdio.h>
#include <stdlib.h>

int main()
{
   int idade=0, sexo=0, totm=0, toth=0, totidadem=0, totidadeh=0;
   int mm25=0, mediaidm=0, mediaidh=0, opcao=1;
   float peso=0.0,totpesom=0.0, totpesoh=0.0, mediapesom=0.0, mediapesoh=0.0;

 while(opcao > 0)
 {

   printf("Idade: ");
   scanf("%d",&idade);
   printf("Peso: ");
   scanf("%f",&peso);
   printf("Sexo: ");
   scanf("%d",&sexo);

   if(sexo == 1)
   {
      totpesom = totpesom + peso; // Totalizador-Acumulador do peso das mulheres
      totm = totm + 1; // Totalizador de mulheres      
      totidadem = totidadem + idade;   
      mediaidm = totidadem / totm; // Calcula média das idades das mulheres
      mediapesom = totpesom / totm; // Calcula média do peso das mulheres

      
        if (idade > 25)
        {
           mm25 = mm25 + 1; // Totaliza mulheres maior que 25 anos
        }  
   }

   // Calculo dos Pesos dos Homens

   if(sexo == 2)
   {
      totpesoh = totpesoh + peso; // Totalizador-Acumulador do peso dos Homens
      toth = toth + 1; // Totalizador de Homens      
      totidadeh = totidadeh + idade;   
      mediaidh = totidadeh / toth; // Calcula média dos idades das Homens
      mediapesoh = totpesoh / toth; // Calcula média do peso dos Homens
   }





        printf("\n\nDigite a Opcao: 1 Para Continuar e 0 Para Sair ");
        scanf("%d",&opcao);
}
    printf("\nO Total de Peso das Mulheres e: %.2f", totpesom);
    printf("\nO Total das Idades das Mulheres e: %d", totidadem);
    printf("\nA Media das Idades das Mulheres e: %d", mediaidm);
    printf("\nA Media dos Pesos das Mulheres e: %.2f", mediapesom);
    printf("\nA Total de Mulheres Com Mais de 25 Anos e: %d", mm25);

    // Exibir informações dos homens

    printf("\nO Total de Peso das Homens e: %.2f", totpesoh);
    printf("\nO Total das Idades das Homens e: %d", totidadeh);
    printf("\nA Media das Idades das Homens e: %d", mediaidh);
    printf("\nA Media dos Pesos das Homens e: %.2f", mediapesoh);
    
    
   printf("\n\n");
   system("pause");
}
