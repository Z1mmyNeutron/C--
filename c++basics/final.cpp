#include <iostream>
#include<limits.h>
using namespace std;

int main(){
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int n;
    
    cout<<"How many numbers do you want to enter?\n";
    cin>>n;
    int a[n];
    
    int sum =0;
    for(int i=0;i<n;i++){
        cout<<"Enter a number\n";
        cin>>a[i];
        if(a[i]>largest)
         largest = a[i];
        if(a[i]<smallest)
         smallest = a[i];
        sum+=a[i];
    }
    
    cout<<"Smallest: "<<smallest;
    cout<<"\nLargest: "<<largest;
    cout<<"\nAverage: "<<sum/n;
return 0;
}
////

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string> 

using namespace std;
string employee;
double hourlyWage;
double hoursWorked;
double grossPay;
double netPay;

double calculateGross(double, double);
double calculateNet(double, double);
double overTime;
double overTimeHours;
string stopper;

int main()
{
    
        cout<<"Hello World\n";
        cout << "Enter the name of the employee: " << endl;
        cin >> employee;
        cout << employee << endl;
        while(employee != "ZZZ"){
        cout << "\nEnter the hourly wage: "<< endl;
        cin >> hourlyWage;
        cout << hourlyWage << endl;
        cout << "\n Enter the hours worked for the current week: " << endl;
        cin >> hoursWorked;
        cout << hoursWorked;
        
        cout << "Employee Name: " << employee << endl;
        cout << "\n Gross Pay: $" << calculateGross(hoursWorked, hourlyWage) << endl;
        cout << "\n Net Pay: $" << calculateNet(hoursWorked, hourlyWage) << endl;
        
    
        }
    return 0;
}

double calculateGross(double hoursWorked, double hourlyWage){
  if(hoursWorked > 40){
      overTimeHours = hoursWorked - 40;
      overTime = overTimeHours*1.5*hourlyWage;
      grossPay = ((hoursWorked - overTimeHours)*hourlyWage) + overTime;
      
  }else{
      grossPay = hoursWorked * hourlyWage;
  }   
  return grossPay;
}

double calculateNet(double hoursWorked, double hourlyWage){
 grossPay = calculateGross(hoursWorked, hourlyWage);
 double deduction = grossPay * .03625;
 return netPay = grossPay - deduction;
}
