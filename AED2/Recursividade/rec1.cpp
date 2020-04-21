#include <stdio.h>
#include <stdlib.h>

int MultiRec(int a, int b){
    if (b==0){
       return(0);
    }else{
          return (a + MultiRec(a, b-1));
    }
}
main(){
    int x=0;
    x = MultiRec(5, 4);
    printf("%d", x);
    system("pause");
}
