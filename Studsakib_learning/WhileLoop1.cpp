#include<iostream>
using namespace std;
int main(){
    int n = 7869;
    int arr[4];
   int i =0;
    while (n != 0)
    {
       int x = n%10;
       //cout<<x<<endl;
       arr[i]=x;
       i++;
    
    //cout<<n<<endl;
       n  = n/10;
    
    }
    for (int i = 0; i < 4; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;
}
