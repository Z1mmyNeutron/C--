#include <iostream>
#include <string>

using namespace std;
//constant is final
const float max_num_dues = 100.00;
const float dues = 15.00;
const float max_num_overtime = 40.00;
const float overtime_rate = 1.5;

//local function 
void instructUser();
float computeGross(float, float);
float computeNet(float);

int main()
{
    //declare vars
    float hours, rate;
    float final_gross, final_net;
    string name_worker;
    instructUser();
    //cin >> name_worker;
    getline(cin, name_worker, '\n');
    cout << "[DATA].... Worker name  []=>: " << name_worker << endl;
    cin >> hours;
   // getline(cin, hours, '\n');
    cout << "[DATA].... Hours worked []=>: " <<  hours << endl;
    cin >> rate;
   //getline(cin, rate, '\n');
    cout << "[DATA].... Hourly rate []=>: " << rate << endl;
    final_gross = computeGross(hours, rate);
    final_net = computeNet(final_gross);
    cout << "[INFO].... Gross Salary is US $ =>" << final_gross << endl;
    cout << "[INFO].... Net Salary is US $ =>" << final_net << endl;
   return 0;
}

void instructUser(){
    cout << ".............................." << endl;
    cout << "This program computes gross and net salary." << endl;
    cout << "A dues amount of: " << dues << " is deducted for " << endl;
    cout << "An employee who earns more than " << max_num_dues << endl << endl;
    cout << "Overtime is paid at the rate of " << overtime_rate << endl;
    cout << "times the regular rate for hours worked over " << max_num_overtime << endl << endl;
    cout << "Enter hours worked and hourly rate " << endl;
    cout << "On separate lines after the prompts." << endl;
   cout << ".............................." << endl;
}
float computeGross(float hours, float rate){
    float gross, regularPay, overtimePay;
    if(hours > max_num_overtime){
        regularPay = max_num_overtime * rate;    
        overtimePay = (hours - max_num_overtime) * overtime_rate * rate;
        gross = regularPay + overtimePay;
    }else{
        gross = hours * rate;
        
    }
    
    return gross;
}

float computeNet(float final_gross){
    float net; 
    if(final_gross > max_num_dues){
        net = final_gross - dues;        
    }else{
        net = final_gross;
    }
    return net;
}