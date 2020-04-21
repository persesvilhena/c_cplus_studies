#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char str1[50], str2[50], str3[50];
	int tam1=0, tam2=0, tam3=0;
    printf("String 1: ");
    scanf("%50[^\n]s", str1);
    fflush(stdin); 
    printf("String 2: ");
    scanf("%50[^\n]s", str2);
    fflush(stdin);   
    printf("String 3: ");
    scanf("%50[^\n]s", str3);
    fflush(stdin);
	tam1 = strlen(str1);
	tam2 = strlen(str2);
	tam3 = strlen(str3);
	printf("%d, %d, %d", tam1, tam2, tam3);
	tam1 = 9;
tam2 = 6;
tam3 = 3;
	if(tam1 >= tam2 >= tam3){
		printf("%s, ", str3);
		printf("%s, ", str2);
		printf("%s", str2);
		printf("puta q pariu");
	}
	if(tam1 > tam3 > tam2){
		printf("%s, %s, %s\n", str2, str3, str1);
	}
	if(tam2 > tam1 > tam3){
		printf("%s, %s, %s\n", str3, str1, str2);
	}
	if(tam2 > tam3 > tam1){
		printf("%s, %s, %s\n", str1, str3, str2);
	}
	if(tam3 > tam1 > tam2){
		printf("%s, %s, %s\n", str2, str1, str3);
	}
	if(tam3 > tam2 > tam1){
		printf("%s, %s, %s\n", str1, str2, str3);
	}
	system("pause");
}
