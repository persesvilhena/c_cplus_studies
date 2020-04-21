#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char s[25], c, c1[5], nova[25], a;
    int i=0, x=0, d=0, br=0;
    printf("string: ");
    scanf("%100[^\n]s", s);
    fflush(stdin);    
    while(s[x] != '\0'){
        if(s[x] != ' '){
            //printf("%c", s[x]);
            nova[d] = s[x];
            d++;
        }else{
            br++;
        }
        x++;
    }
    nova[d] = '\0';
    printf("string: %s", nova);
    printf("Espacoes em branco: %d", br);
    system("pause");
}
