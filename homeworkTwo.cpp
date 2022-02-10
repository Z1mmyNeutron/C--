/*
The problem at hand is to discover information about data, where the data is a user entered 
std::string. The information you will need to uncover will be as follows:
1. One program that answers ALL of the following questions:
a. The most common character of the user entered string
b. The least common character of the user entered string
c. The number of occurrences of the character 'a'.
2. One more program that answers the following questions:
a. The number of occurrences of EACH lowercase letter, where the count of each 
character is printed next to the letter as standard output.

*/



#include <iostream>
#include <string>
#include <map>

using namespace std;

//void function(parameter type only);

int mostCommon(string);
int leastCommon(string);
int findA(string);
int lowerCaseLetters(string);

int main() {

    //call function 

    std::string input;
    
    do {
        std::cout << "enter input here >>";
        std::getline(std::cin, input);
        cout << input << endl;
       
        if (input.empty()) {
            break;
        }else{
        mostCommon(input);
        findA(input);
        leastCommon(input);
        lowerCaseLetters(input);
        
        }
        /*
            Your work goes here; analyze and print information about input here
        */
    } while (!input.empty());
    std::cout << "Exiting..." << std::endl;
}

int mostCommon(string input){
    //loop through array and see if starting character is the same as the character we're on
   
    int max = 0;
    char mCC;
    int size = input.length();

    for(int i = 0; i < size; i = i + 1){
        int count = 0; 
        for(int j = 0; j < size; j = j + 1){
           if(input[j] == input[i]){
               count++;
           }
        }
        if(count > max){
            max = count;
            mCC = input[i];
        }
    }
    cout<< "The most frequent character of the string is: " << mCC << ", it appears " << max << " times" << endl;
    return max;
}

//find all occurances of a 
int findA(string input){
    int max = 0;
    char mCC;
    int size = input.length();

    for(int i = 0; i < size; i = i + 1){
        int count = 0; 
        for(int j = 0; j < size; j = j + 1){
           if(input[j] == input[i] && input[i] =='a'){
               count++;
           }
        }
        if(count > max){
            max = count;
            mCC = input[i];
        }
    }
    cout<< "The letter: " << mCC << ", appears " << max << " times" << endl;
    return max;
}


int leastCommon(string input){
    int i, min = 999;
    int count[256] = {0};
    for(i = 0; i < input.length(); i = i + 1){
        if(input[i]==' ')
            continue;
            count[input[i]]++;
    }
    char ch=' ';
    for (i =0; i < input.length(); i = i + 1) {
        if(count[input[i]]!=0)
        if (count[input[i]]<=min) {
            min = count[input[i]];
            ch = input[i];
        }
    }
  cout<<"The mimimum occuring character in a string is " << ch << ", it appears " << min << " times " << endl;
    return min;
}



int lowerCaseLetters(string input){
    int i, count[256] = {0};
    char lCC;
    for(i = 0; input[i] != '\0'; i = i + 1){
        count[input[i]]++;
    }
    cout << "\n Lowercase Character Frequency \n";
    
    for(i = 0; i < 256; i = i + 1){
        if(count[i] != 0 ){
           char c = i;
           if(c >='a' && c <='z'){
                cout << " " << (char)i << "     " << count[i]<<endl;
               
           }
            
        }
        
            
    }
    return 0;
}

