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
int main(){
    int n;
    cin>>n;
    if(isEven(n)){
        cout<<n<< " is a even number! "<<endl;
    }else{
        cout<<n<<" is not a even number"<<endl;
    }
}