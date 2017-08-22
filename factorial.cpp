 
#include "functions.h"
#include "cstdlib"
void check(int n)
{
	if(n < 1)
	{
		std::cout << "Give a number greater than 0" << std::endl;
		exit(0);
	}
}
int factorial(int n){
	check(n);
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
