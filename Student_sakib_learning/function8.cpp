#include<iostream>
using namespace std;
// prime number 
/*
    19
    9.5
    even = 2
    even number is not prime 
*/
bool isEven( int n ){
    if(n%2 == 0){
        return true;
    }else{
        return false;
    }
}
string prime(int n){

    if(isEven(n) == true){
        return "Not prime Number!";
    }else{
        int x =0;
    for (int i = 2; i < n; i++)
    {
        if(n%i == 0){
            x = 1;
      break;
        }
    }
    if(x == 0){
        return "prime number";
    }else{
        return "Not a prime number";
    }
    }
}
int main(){
    int n;
    cin>>n;
   string x = prime(n);
  cout<<x<<endl;
}