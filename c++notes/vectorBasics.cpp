
/* 
C++ program to illustrate the iterators in vector
adapted from https://www.geeksforgeeks.org/vector-in-cpp-stl/
*/
#include <iostream>
#include <vector>
#include <string>
  
using namespace std;
  
int main()
{
    vector<int> vec;
  
    for (int i = 1; i <= 5; i++)
        vec.push_back(i);
  
    cout << "iterating over a vector" << endl;
    
    cout << "Output of begin and end: ";
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); ++it)
        cout << *it << " ";
  
    cout << "\nOutput of cbegin and cend: ";
    for (auto i = vec.cbegin(); i != vec.cend(); ++i)
        cout << *i << " ";
  
    cout << "\nOutput of rbegin and rend: ";
    for (auto ir = vec.rbegin(); ir != vec.rend(); ++ir)
        cout << *ir << " ";
  
    cout << "\nOutput of crbegin and crend : ";
    for (auto ir = vec.crbegin(); ir != vec.crend(); ++ir)
        cout << *ir << " ";
    cout << endl << endl;
  
  
    cout << "element accesser in vector" << endl;
    cout << "Reference operator [g] : vec[2] = " << vec[2] << endl;
    cout << "at : vec.at(4) = " << vec.at(4) << endl;
    cout << "front() : vec.front() = " << vec.front() << endl;
    cout << "back() : vec.back() = " << vec.back() << endl;
  
    // pointer to the first element
    int* pos = vec.data();
    cout << "The first element is " << *pos;
    cout << endl << endl;


    cout << "Modifiers in vector" << endl;
    
    // fill the array with 10 five times
    vec.assign(5, 10);
  
    cout << "The vector elements are: ";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
  
    // inserts 15 to the last position
    vec.push_back(15);
    int n = vec.size();
    cout << "\nThe last element is: " << vec[n - 1];
  
    // removes last element
    vec.pop_back();
  
    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < vec.size(); i++)
        cout << vec[i] << " ";
  
    // inserts 5 at the beginning
    vec.insert(vec.begin(), 5);
  
    cout << "\nThe first element is: " << vec[0];
  
    // removes the first element
    vec.erase(vec.begin());
  
    cout << "\nThe first element is: " << vec[0];
  
    // inserts at the beginning
    vec.emplace(vec.begin(), 5);
    cout << "\nThe first element is: " << vec[0];
  
    // Inserts 20 at the end
    vec.emplace_back(20);
    n = vec.size();
    cout << "\nThe last element is: " << vec[n - 1];
  
    // erases the vector
    vec.clear();
    cout << "\nVector size after erase(): " << vec.size();
    cout << "\nVector capacity is: " << vec.capacity();
    cout << endl << endl;
  
    cout << "two vectors to perform swap";
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
  
    cout << "\nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
  
    // Swaps v1 and v2
    v1.swap(v2);
  
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
        
        
    return 0;
}


