#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name1, name2, name3;
    cout << "Data#1: ";

    getline(cin, name1, '\n');
    int start0 = name1.find("2A0");
    name1.erase(start0, 3);
    int start1 = name1.find("2D0");
    name1.erase(start1, 3);
    cout << "#Data: ";
    getline(cin, name2, '\n');
    int start2 = name2.find("2A0");
    name2.erase(start2, 3);
    int start3 = name2.find("2D0");
    name2.erase(start3, 3);
    cout << "Data#3: ";
    getline(cin, name3, '\n');
    int start4 = name3.find("2A0");
    name3.erase(start4, 3);
    int start5 = name3.find("2D0");
    name3.erase(start5,3);


   
    

    
    int start = name1.find("***");
    
    cout << start << endl;
    name1.erase(start, 3);
    cout << name1 << endl;
    name1.insert(start, ", ");
    cout << name1 << endl;
   return 0;
}