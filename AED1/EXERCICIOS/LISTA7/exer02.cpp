#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
    char s[100], c, c1[5], teste, a;
    int i=0, x=0, pos=0;
    printf("string: ");
    scanf("%100[^\n]s", s);
    fflush(stdin);
    printf("caracter: ");
    scanf("%100[^\n]s", c1);
    fflush(stdin);
    c = c1[0];
   // printf("teste: %c", c);
    while(s[x] != '\0'){
        a = s[x];
        //printf("\n%c", a);
        if(c == a){
            if(i == 0){
                pos = x;
                i = 1;
            }
        }
        x++;
    }
    printf("pos: %d", pos + 1);
    system("pause");
}
