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
// for (int i = 0; i < count; i++)
// {

// }
/*
    condition -->n!=0
        7869 ->
        7869%10 = 9
        7869/10 = 786
        now n = 786
        786%10 = 6
        786/10 = 78
        n== 78
        78%10 = 8
        78 /10 = 7
        n = 7
        n%10 = 7
        n/10 = 0
        n= 0
         loop == end
*/
