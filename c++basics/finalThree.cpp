#include <iostream>
#include<limits.h>
using namespace std;

int main()
{
    int largest = INT_MIN;
    int smallest = INT_MAX;
    int n;
    cout<<"How many numbers do you want to enter?\n";
    cin>>n;
    int a[n];
    double sum =0;
    for(int i=0;i<n;i++){
        cout<<"\nEnter a number [" << i << "] ===>";
        cin>>a[i];
    
    if(a[i]>largest)
        largest = a[i];
    if(a[i]<smallest)
        smallest = a[i];
        sum+=a[i];
    }
    cout<<"\nLargest of the numbers is: "<<largest;
    cout<<"\nSmallest of the numbers is: "<<smallest;
    cout<<"\nAverage of the numbers is: "<<sum/n;
    return 0;
}