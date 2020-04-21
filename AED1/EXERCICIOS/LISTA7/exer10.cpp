#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char login[50], senha[50], login1[50] = "teste", senha1[50] = "teste";
	printf("Login: ");
	scanf("%50[^\n]s", login);
	fflush(stdin);
	printf("Senha: ");
	scanf("%50[^\n]s", senha);
	fflush(stdin);
	if((strcmp(login,login1) == 0) && (strcmp(senha,senha1) == 0)){
		printf("login efetuado com sucesso!");
	}else{
		printf("login ou senha estao incorretos!");
	}
	system("pause");
}
