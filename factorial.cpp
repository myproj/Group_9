 
#include "functions.h"
#include "cstdlib"
int check(int n)
{
	while(n < 1)
	{

		std::cout << "Give a number greater than 0" << std::endl;
		std::cin >> n;
	}
	return n;
}
int factorial(int n){
	if(n<0){
		printf("Enter positive number to find factorial\n");
		return 0;
	}
	n = check(n);
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
