#include<stdio.h>
#include<stdlib.h>

int x, vetor[30], op, n1=0, n2 = 0, qtd = 30, n31=0, n32=0;

int procurar(void){
    //bool a;
	int a=0, i=0, procuraNumero;
	printf("Procurar Numero: ");
    scanf("%d", &procuraNumero);
    for(i=0;i<qtd;i++){
	    if(procuraNumero == vetor[i]){
    	    a = 1;
        }
    }
    return a;
}

int contar(int n, int x){
    int i=0;
    n2 = 0;
    for(i=0;i<qtd;i++){
	    if(n == vetor[i]){
    	    n2++;
        }
    }
}

int substituir(int num1, int num2){
    int i=0, q=0;
    for(i=0;i<qtd;i++){
	    if(num1 == vetor[i]){
    	    vetor[i] = num2;
    	    q++;
        }
    }
    return q;
}

main(){
    for(x=0;x<qtd;x++){
        printf("Numero: ");
        scanf("%d", &vetor[x]);
    }

    while(op != 5){
        system("cls");
        printf("************** MENU *****************\n");
        printf("1 - Procurar\n");
        printf("2 - Contar\n");
        printf("3 - Substituir\n");
        printf("4 - Imprimir na Tela\n");
        printf("5 - Sair\n\n\n");
        printf("Opcao: ");
        scanf("%i",&op);
        switch (op){
            case 1:
    			 if(procurar() == 1){
                     printf("Numero encontrado\n");
                 }else{
                     printf("Numero nao encontrado\n");
                 }
      			 system("pause");
    			 system("cls");
            break;

            case 2:
                 printf("Numero a ser contado: ");
                 scanf("%d", &n1);
                 contar(n1,n2);
                 printf("Quantidade: %d\n", n2);
                 system("pause");
    			 system("cls");
            break;
            case 3:
                 printf("Numero a ser substituido: ");
                 scanf("%d", &n31);
                 printf("Numero substituto: ");
                 scanf("%d", &n32);
                 printf("Quantidade: %d\n", substituir(n31,n32));
                 system("pause");
    			 system("cls");

            break;
            case 4:
                 for(x=0;x<qtd;x++){
                     printf("%d\n", vetor[x]);
                 }
                 system("pause");
    			 system("cls");
            break;
            case 5:
            break;
            default:
                printf("Opcao Invalida\n");



        }
    }
}
