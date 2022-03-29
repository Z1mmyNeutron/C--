#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
   
    cout << "name: ";
    getline(cin, name, '\n');
    
    cout << name << endl;
    
    int start = name.find("***");
    
    cout << start << endl;
    name.erase(start, 3);
    cout << name << endl;
    name.insert(start, ", ");
    cout << name << endl;
   return 0;
}