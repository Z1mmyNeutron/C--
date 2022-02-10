/* not recursive

#include <iostream>
#include <string>

int factorial(int);
using namespace std;

main(){
    for(int i = 0; i < 10; ++i){
        cout << factorial(i) << endl;
    }
    return 0;
}

int factorial(int num){
    if(num > 1){
        return num + factorial(num - 1);
    }
}



*/
//recursive factorial 

#include <iostream>
#include <string>

using namespace std;

int factorial(int);

main(){
    for(int i = 0; i < 10; ++i){
        cout << factorial(i) << endl;
    }
    return 0;
}


int factorial(int n){
    if(n > 1){
        return n * factorial(n-1);
    }
    return 1;
}