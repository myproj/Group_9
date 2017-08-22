 
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
<<<<<<< HEAD
<<<<<<< HEAD
	if(n<0){
		printf("Enter positive number to find factorial\n");
		return 0;
	}
=======
	check(n);
>>>>>>> e84d0747503750f30d39da876ffba5240f58ff46
=======
	n = check(n);
>>>>>>> 615f416526af6d8342936e30bc925e043bb1f3f3
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
