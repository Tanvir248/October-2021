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
int prime(int n){

    if(isEven(n) == true){
        return 0;
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
        return 1;
    }else{
        return 0;
    }
    }
}
int main(){
    int n;
    cin>>n;
   int x = prime(n);
   if(x==1)
   cout<< n<< " is prime"<<endl;
   else{
       cout<<n<<" is not prime"<<endl;
   }
}