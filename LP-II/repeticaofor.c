#include <stdio.h>
int main ()
{
   int Count;
   char ch;

   printf(" Digite uma letra - <X para sair> ");
   scanf("%c", &ch);   
   
   for (Count=1;;Count++)
   {
     if (ch == 'X') 
        break;
     printf("\nLetra: %c",ch);
     scanf("%c", &ch);
   }
   return(0);
}
