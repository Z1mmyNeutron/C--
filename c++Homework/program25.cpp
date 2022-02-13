/*
Your goal is to write and test two functions. The first function will recursively find the 
sum of all numbers in a vector of integers. The next function will recursively find and sum all 
numbers in a vector of integers tail recursively. 
The first funcion will be declared like so, int findSum(std::vector<int> vec);. 
The second function will be declared like so int findSumTR(std::vector<int> vec);. 
You are welcome to define these functions however you choose; you're welcome to use a 
gateway function into each and add your own recursive functions. However, you must at least 
declare and define each of these functions, test them, and prove that they work accurately for 
full credit. */

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <numeric>


using namespace std;


int findSum(std::vector<int>);
int findSum(std::vector<int>, int);

//tail recursion 
int findSumTR(std::vector<int>);
int findSumTR(std::vector<int>, int, int);

int main(){
//test input with negative numbers, a zero, small numbers and big numbers
  std::vector<int> vec = {11233, -2333333, 24, -1, 0, 35, 134, 3121, 1, 3212};
  int n = 0;
  int index = 0;
  int output = 0;
  findSum(vec, n);
  cout << "The sum of the vector is: " << findSum(vec, n) << std::endl;
  cout << "The tail recursive version vector sum is: " << findSumTR(vec, index, output) << std::endl;
  
  return 0;

}

int findSum(std::vector<int> vec){
    return findSum(vec, 1);
}

int findSum(std::vector<int> vec, int n){
        if(n == vec.size()){
            return 0;
        }else{
            return(findSum(vec, n + 1) + vec[n]);
        }
    }
    
int findSumTR(std::vector<int> vec){
    return findSumTR(vec, 0, 0);
}
int findSumTR(std::vector<int> vec, int index, int output){
    if(index == vec.size()){
        return output;
    }else{
        return findSumTR(vec, index+1, output+vec[index]);
        
    }
}


