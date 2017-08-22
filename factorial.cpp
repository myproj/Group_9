 
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
<<<<<<< HEAD
	if(n<0){
		printf("Enter positive number to find factorial\n");
		return 0;
	}
=======
	check(n);
>>>>>>> e84d0747503750f30d39da876ffba5240f58ff46
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
