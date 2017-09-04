 
#include "functions.h"
#include "cstdlib"
int check(int n)
{
	while(n < 0)
	{

<<<<<<< HEAD
		printf("Give a number greater than 0\n");
		std::cin >> n;

		/*printf("Give a number greater than 0\n");
		std::cin >> n;*/
		return -1;
>>>>>>> trail1
	}
	return n;
}
int factorial(int n){
<<<<<<< HEAD

=======
<<<<<<< HEAD
	if(n==0)
		return 1;
>>>>>>> trail1
	if(n>0){

	if(n<0){
		printf("Enter positive number to find factorial\n");
		return 0;
	}
	n = check(n);
<<<<<<< HEAD

=======
	if(n==-1)
		return -1;
>>>>>>> fb329a93c1d48b8dd9cd2aa75bc35c48f224be03
>>>>>>> trail1
    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
	}
	

}
///////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////
/////////////