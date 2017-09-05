#include <iostream>
#include "hello.cpp"
#include "factorial.cpp"
using namespace std;
int main(){
    print_hello();
    cout<< endl;
    printf("The factorial is %d", factorial(-2));
    return 0;
}
