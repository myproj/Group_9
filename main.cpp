#include <iostream>
#include "hello.cpp"
#include "factorial.cpp"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    cout<<"The factorial is "<< factorial(-2)<< endl;
    return 0;
}
