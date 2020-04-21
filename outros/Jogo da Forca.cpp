# include <stdio.h>
# include <stdlib.h>
# include <conio.h>
# include <string.h>
# include <ctype.h>

/*
Jogo da Forca 1.0
Criado em 17/05/2009 
Autor: André Cipriano Lopes de Almeida
e-mail: almeida.x2@gmail.com
descrição: Jogo da Forca onde o objetivo é adivinhar qual a palavra escondida atrás das barras. 
O jogador deve informar uma letra onde na qual acha que possa conter na palavra secreta.
*/

char letras_usadas (char arquivo[20], int i_arquivo);
void mostra_forca (char corpo[20], int credito);
void mostra_achou (char achou[20], int tam_palavra);

int main () {
    char jogador[20], palavra[20], dica[20], corpo[20], achou[20], arquivo[20], aux_letra[20], letra;  
    int creditos, pontos, flag, tam_palavra, tam_letra, i_arquivo, i;
    
    /* 
    Índice de Variáveis
    jogador: Nome do participante
    palavra: Palavra chave do jogo
    dica: Dica relacionada a palavra
    corpo: Recebe as partes do corpo do boneco
    achou: Letras acertadas pelo jogador
    arquivo: Letras usadas pelo jogador
    aux_letra: Válida se a letra que o jogador usou é válida na rodada
    letra: Letra que o jogador usou na rodada
    créditos: Inicia-se com 6, se igual a 0 índica que o jogador perdeu o jogo
    pontos: Soma as letras que já foram acertadas
    flag: Se flag igual a 1 índica que jogador errou ou a letra digitada não é válida, se 0 índica que acertou
    tam_palavra: Tamanho da Palavra
    tam_letra: Tamanho da Letra
    i_arquivo: índice do arquivo
    i: contador
    */
    
    // Apresentação
    printf("\n\n");   
    printf("         XXXXX    XXXXX     XXXX     XXXXX       XXXX       XXXXX     \n");
    printf("            XX   XX   XX   XX       XX   XX      XX   X    XX   XX    \n");
    printf("            XX   XX   XX   XX       XX   XX      XX    X   XX   XX    \n");
    printf("            XX   XX   XX   XX       XX   XX      XX    X   XXXXXXX    \n");
    printf("            XX   XX   XX   XX  XX   XX   XX      XX    X   XX   XX    \n");
    printf("        X   XX   XX   XX   XX   X   XX   XX      XX   X    XX   XX    \n");
    printf("         XXXX     XXXXX     XXXX     XXXXX       XXXX      XX   XX    \n");
    printf("\n");    
    printf("               XXXXXXX    XXXXX    XXXXX      XXXX    XXXXX           \n");
    printf("               XX        XX   XX   XX   X    XX      XX   XX          \n");
    printf("               XX        XX   XX   XX   X   XX       XX   XX          \n");
    printf("               XXXXXXX   XX   XX   XXXXX    XX       XXXXXXX          \n");
    printf("               XX        XX   XX   XX X     XX       XX   XX          \n");
    printf("               XX        XX   XX   XX  X     XX      XX   XX          \n");
    printf("               XX         XXXXX    XX   X     XXXX   XX   XX          \n");
    printf("\n\n");
    printf("\n\n");
    printf ("                                 START");
    getch ();
    
    system ("cls");
    printf ("JOGO DA FORCA 1.0\n\n");
    printf("\n\n");
    printf("\n\n");
    printf ("               NOME DO JOGADOR: ");
    gets (jogador);
    printf("\n\n");
    printf ("               PE%cA PARA ALGUEM DIGITAR OS SEGUINTES ITENS ABAIXO!", 128); 
    getch ();
    printf("\n\n\n");
    printf ("               PALAVRA CHAVE: ");
    gets (palavra);
    printf("\n\n");
    printf ("               DICA: ");
    gets (dica);
    printf("\n\n");
    
    // Reset de variáveis
    i_arquivo=0;
    creditos=6;
    pontos=0;
    tam_palavra=strlen(palavra);
    for (i=0; i<tam_palavra; i++) {
       if (palavra[i]==' ') {
          achou[i]=' ';
          pontos++;
       }
       else {
          palavra[i]=toupper(palavra[i]);
          achou[i]='_';
       }
    }  
    for (i=0; i<20; i++) {
       arquivo[i]=' ';
    }
    for (i=0; i<6; i++) {
       corpo[i]=' ';
    }
    for (i=0; jogador[i]!='\0'; i++) {
       jogador[i]=toupper(jogador[i]);
    }
    for (i=0; dica[i]!='\0'; i++) {
       dica[i]=toupper(dica[i]);
    }
    
    system ("cls");
    printf ("JOGO DA FORCA 1.0\n\n");
    mostra_forca(corpo, creditos);
    printf ("\n\n");
    mostra_achou(achou, tam_palavra);
    printf ("\n\n");
    puts (dica);
    printf ("\n");
    
    while ((creditos>0)&&(pontos<tam_palavra)) {
       flag=0;
       printf ("LETRA: ");
       gets (aux_letra);
       tam_letra=strlen(aux_letra);
       if (tam_letra!=1) {
          printf ("DIGITE \"UMA\" LETRA!\n");
          getch ();
          flag=1;
       }
       else {
          letra=toupper(aux_letra[0]);  
          arquivo[i_arquivo]=letra;
          if (letras_usadas (arquivo, i_arquivo)) { 
             printf ("ESTA LETRA JA FOI!");
             getch ();
             arquivo[i_arquivo]=' ';
             flag=1;
          }
          else {
             arquivo[i_arquivo]=letra;
             i_arquivo++;  
             for (i=0; i<tam_palavra; i++) {
                if (letra==palavra[i]) {
                   achou[i]=letra;
                   flag=1;
                   pontos++;
                }
             }
          }
       }
       
       if (flag==0) {
          printf ("ESTA LETRA NAO TEM!", jogador);
          getch ();
          creditos--;
          switch (creditos) { 
             case 0: corpo[0]='\\'; break;
             case 1: corpo[1]='/'; break;
             case 2: corpo[2]='-'; break;
             case 3: corpo[3]='-'; break;
             case 4: corpo[4]='|'; break; 
             case 5: corpo[5]='O'; break;  
          }
       }
       
       //Status do jogo
       system ("cls");
       printf ("JOGO DA FORCA 1.0\n\n");
       mostra_forca(corpo, creditos);
       printf ("\n\n");
       mostra_achou(achou, tam_palavra);
       printf ("\n\n");
       puts (dica);
       printf ("\n");
       printf ("LETRAS JA USADAS: ");
       for (i=0; i<=i_arquivo; i++) {
          printf ("%c ", toupper(arquivo[i]));
       }   
       printf ("\n\n");
       
       //Resultado Final   
       if (pontos==tam_palavra) {
          printf ("%s, VOCE GANHOU!\n", jogador);
       }
       if (creditos==0) {
          printf ("%s, VOCE PERDEU!\n", jogador);
          printf ("A PALAVRA ERA ");
          puts (palavra); 
          printf ("\n");
       }
    }
    getch ();
}      
       
char letras_usadas (char arquivo[20], int i_arquivo) { 
   int i; 
   for (i=0; i<i_arquivo; i++) {
      if (arquivo[i_arquivo]==arquivo[i]) {
         return (true);
      }       
   }
   return (false);
}


void mostra_forca (char corpo[20], int credito) { 
     printf ("  _ _ \n");
     printf (" |   |\n");
     printf (" |   %c\n", corpo[5]); 
     printf (" |  %c", corpo[3]); 
     printf ("%c", corpo[4]); 
     printf ("%c \n", corpo[2]); 
     printf (" |  %c", corpo[1]); 
     printf (" %c \n", corpo[0]); 
     printf ("_|_   \n"); 
}                         

void mostra_achou (char achou[20], int tam_palavra) {
     int i;
     for (i=0; i<tam_palavra; i++) {
        printf ("%c ", achou[i]);
     }
}
