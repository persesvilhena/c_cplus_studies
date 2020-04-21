#include <stdio.h>
#include <stdlib.h>

main(){
	int x=0, y=0, s=0;
	for(x=1;x<101;x++){
		for(y=1;y<x;y++){
			if((x%y) == 0){
				s = s + y;
			}
		}
		if(s == x){
			printf("\n%d", x);
		}
		s=0;
	}
}
