# include <iostream>
#include <string>
#include <vector>


using namespace std; 

int main(){
 while(true){
     int input; 
     cout << "Give me an int" << endl;
     cin >> input;
     if(input < 1){
         cout << "Exit Porgam .." << endl;
         return 0;
     }
 
 cout << fib(input) << endl;
    }
}

int fib(int i){

    if(i <= 0){
        return 1;
    }
    int prev, curr, index, next;
    prev = 0;
    curr = 1;
    index = 1;
    while(index < i){
        next = prev + curr;
        prev = curr;
        curr = next; 
    }
    return curr;
}