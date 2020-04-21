#include <stdlib.h>
#include <stdio.h>

main(){
    int x[8] = {0}, ma = 0, me = 0, i = 0;
    for(i=0; i<8; i++){
        printf("valor: ");
        scanf("%d", &x[i]);
    }
    for(i=0; i<8; i++){
        if(x[i] >= 0){
            if(x[i] > ma){
                ma = x[i];
            }
        }else{
            if(x[i] < me){
                me = x[i];
            }
        }
    }
    for(i=0; i<=8; i++){
        for(z=0; z<=ma; z++){
            if(x[i] == z){
                
        
        

}
