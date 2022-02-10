#include <iostream>
#include <string>

using namespace std;

int findMax(string);
main(){
    
}

int findMax(string input){
    int max = input[0];
    for(int i = 0; i < input.length(); i = i + 1){
        if(input[i] > max){
            max = input[i];

        }
    }
    return max;
}