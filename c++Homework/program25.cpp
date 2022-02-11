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


//one


int findSum(std::vector<int>);
int findSum(std::vector<int>, int);

//tail recursion 
int findSumTR(std::vector<int>);
int findSumTR(std::vector<int>, int);

int main(){

  std::vector<int> vec = {2, 3, 4, 5, 6, 7};
  int n = 0;
  findSum(vec, n);
  cout <<  findSum(vec, n) << std::endl;
  cout << findSumTR(vec) << std::endl;
  
  
  
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
    
    
    
    
//Turn this into a recursive function
//YOURE Working on this one 
int findSumTR(std::vector<int> vec){
    return findSumTR(vec, 1);
}

int findSumTR(std::vector<int> vec, int n){
    if(n == 0){
        return 0;
    }
  return  (findSum(vec, n - 1) + (vec[vec.size()-1]) - n);

}


