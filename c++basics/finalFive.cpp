#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int total = 0;
    int n;
 
    cout<<"How many numbers do you want to enter?\n";
    cin>>n;
    int a[n];
    float sum =0;
    for(int i=0;i<n;i++){
        cout<<"\nEnter Score:";
        cin>>a[i];
    if(a[i]>largest)
        largest = a[i];
    if(a[i]<smallest)
        smallest = a[i];
        sum+=a[i];
        total+=a[i];
   
   
    }
    cout << "___________________\n";
    for(int k = 0; k < n; k++){
        if(a[k] < 59 && a[k] > 0){
            cout << a[k] << "========> Number of  unsatisfactory score" << endl;
        }else  if(a[k] < 89 && a[k] > 60){
            cout << a[k] << "========> Number of satisfactory score" << endl;
        }
        else  if(a[k] > 90){
            cout << a[k] << "========> Number of outstanding score" << endl;
        }else{
            cout <<"========>  Wrong Number Score \n";
        }
        
    }
    cout << "___________ \n Result: \n" << endl;
    cout <<"\nThe Sum is: " << total;
    cout<<"\nThe Average is: "<<sum/n;
    
    float average = total/n;
    
    cout << "\n_________ \n Comparison with average" << endl;
    
    for(int j =0; j < n; j++){
        if(a[j] > average){
            cout << a[j] << endl;
        }else{
            cout << a[j] << "(*) The score is less than the average" << endl;
        }
    }
   
   
    return 0;
}