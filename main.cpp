#include <iostream>
#include "hello.cpp"
#include "factorial.cpp"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial of 5 is "<< factorial(5)<< endl;
    return 0;
}
