//recrusion
#include <iostream>
#include <string>

using namespace std;
bool isPalindrome(string);
bool isPalindrome(string, int, int);
main(){
    cout << boolalpha;
    cout << isPalindrome("racecar") << endl;
    cout << isPalindrome("bob") << endl;
    cout << isPalindrome("a") << endl;
    
    return 0;


}
bool isPalindrome(string str){ //gateway function
    return isPalindrome(str, 0, str.length()-1); //calls function to do the work
}
bool isPalindrome(string str, int i, int j){
    //int i = 0; //first variable index of string
    //int j = str.length()-1; // last variable index of string

   // while(i < j){
       if(i < j){
            if(str[i] != str[j]){ // char comparison
            return false; //not a palindrome
        }
        ++i;// incriment i
        --j; // decriment j
        return isPalindrome(str, i , j);
    }// and keep going
    return true; // if we get all the way through
}