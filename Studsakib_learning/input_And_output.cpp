// sum of all arrays element 
#include<iostream>
using namespace std;

int main(){
    //file read
    freopen("input.txt", "r", stdin);
     int n;
    cin>>n;
      int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    //output.text file write 
    freopen("output.txt", "w", stdout);
   cout<<sum<<endl;
   
   }