
#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
void print(vector<int> & vec) {
	for (int i =0 ; i < vec.size(); ++i) {
		cout << vec[i] << " ";
	}
	cout << endl;
}

void selectionSort(vector<int> &sort){
    int vecSize = sort.size();
    int j, min, i;
    for(j = 0; j < vecSize -1; ++j){
        min = j;
        for(i = j+1; i < vecSize; ++i){
            if(sort.at(min) > sort.at(i))
                min = i;
        }
        if(min !=j)
            swap(sort.at(j), sort.at(min));
    }
    print(sort);
}
//TEST INPUT
void addNums(vector<int> &sort){
    sort.push_back(129);
    sort.push_back(-13);
    sort.push_back(4);
    sort.push_back(2);
    sort.push_back(2941);
    sort.push_back(293);
    print(sort);
}


int main() {
    
int temp;
std::vector<int> sort;
addNums(sort);
selectionSort(sort);
return 0;
}
 