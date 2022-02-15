#include <iostream>

using namespace std;

int getEmpty(int, int);

int main()
{
    string filled;
    int roomNum, capacity, Enroll, emptySeat;
    
    cin >> roomNum;
    cout << "Enter room number: " << roomNum << endl;
    cin >> capacity;
    cout << "Enter capacity of room: " << capacity << endl;
    cin >> Enroll;
    cout << "Enter the number of students that are already enrolled: " << Enroll << endl;
    emptySeat = getEmpty(capacity, Enroll);
    
    cout << "Room: " << roomNum << " Capacity of: " << capacity << " currently: " << Enroll << " students enrolled." << endl;
    if(capacity < Enroll){
        cout << " Enrollment cannot be larger Capacity."<< endl;
        
    }else if(emptySeat == 0){
        cout << "We are 0 empty seats and the class is filled." << endl;
        filled = "Filled.";
        
    }else{
        filled = "Not filled.";
        cout << "We are " << emptySeat << " empty seats and the class is not filled." << endl;
        
    }
    cout << endl;
    cout << "REPORT: " << endl;
    cout << "<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>><><><><>" << endl;
    

}
int getEmpty(int capacity, int Enroll){
    
    return capacity - Enroll;
}