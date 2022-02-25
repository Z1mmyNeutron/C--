#include <iostream>
#include <string>
#include <vector>

using namespace std;

void selectionSort(std::vector<int>, int);
void swap(int, int);
void printVector(std::vector<int>, int);

int main()
{
 
   std::vector<int> vec = {1, 4, 5, 6, 2, 3, 7};
   int size = vec.size();
   int n = vec.size()/sizeof(vec[0]);
   selectionSort(vec, n);
   printVector(vec, size);
   
   return 0;
}

void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
void selectionSort(std::vector<int> vec, int n){
    int i, j, min;
    
    for(int i = 0; i < n-1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(vec[j] < vec[min]){
                min = j;
            }
            swap(&vec[min], &vec[i]);
        }
    }  
       
    
}
void printVector(std::vector<int> vec, int size){
    int i;
    for(i = 0; i < size; i++)
        cout << vec[i] << " " << endl;
    
}