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
void prime(int n){

    if(isEven(n) == true){
        cout<<n<<" is not a prime numberr!"<<endl;
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
        cout<<n<<" is prime number !"<<endl;
    }else{
        cout<<n<<" is not a prime number"<<endl;
    }
    }
}
int main(){
    int n;
    cin>>n;
    prime(n);
}