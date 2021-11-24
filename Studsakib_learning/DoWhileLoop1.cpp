#include<iostream>
using namespace std;
int main(){
        int n = 7869;
    int arr[4];
  cout<<n<<endl;
  do{
      int x = n%10;
       cout<<x;
       n  = n/10;
   }while (n != 0);

   cout<<endl;

}
