#include <iostream>
#include <string>

using namespace std;

int fib(int);

main(){
    for(int i = 0; i < 10; i++){
        cout << "The " << i << " fibonacci";
        cout << "The number is " << fib(i) << endl;
    }
}

int fib(int n){
    if(n < 2){
        return 1;
    }
    return fib(n-1) + fib(n-2);
}