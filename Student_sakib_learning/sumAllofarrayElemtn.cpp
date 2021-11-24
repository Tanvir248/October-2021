// sum of all arrays element 
#include<iostream>
using namespace std;

int sumOfArrays(int n){
    
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
    
    return sum;

}
int main(){
     int n;
    cin>>n;
    int ans = sumOfArrays(n);
    cout<<ans<<endl;
   }