#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> & vec){
    for(size_t i = 0; i < vec.size() -1; i++){
        size_t min = i;
        for(size_t j = i + 1; j < vec.size(); j++){
            if(vec[j] < vec[min]){
                min = j;
            }
            int temp = vec[i];
            vec[i] = vec[min];
            vec[min] = temp;
        }
    }
}


int main() {
    vector<int> vec = {-23, -19, 2, 13, 55, 3, 9};
    int n = 0;
    while (true) {
        cout << "Enter an integer: ";
        if (!(cin >> n)) break;
        vec.push_back(n);
        
    }
    selectionSort(vec);
    for (size_t i = 0; i < vec.size(); i++)
        cout << vec[i] << '\n';
}