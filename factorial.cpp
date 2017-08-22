#include "functions.h"

int factorial(int n){
	if(n>0){
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
	}
	else 
	{ int a;
		printf("enter +ve no \n");
		scanf("%d",&a);
		return factorial(a);
	}

}
