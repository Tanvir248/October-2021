#include<iostream>
using namespace std;
int main(){
     int arr[4];
     int n;
    cin>>n;
    //n=4
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }

     for (int i = 0; i < n; i++)
     {
         cout<<arr[i]<<" ";
     }    
     cout<<endl;
    return 0;
}
/*
An array has two part
  naming par "arr" index part [];
  index = value;
  arr[4];
  arr[0] = 78;
  arr[1] = 69;
  arr[2] = 70;
  arr[3] = 48;
  
  cout<<arr[2]<<" ";
*/