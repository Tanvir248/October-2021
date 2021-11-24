#include<iostream>
using namespace std;

// retrun string value
int even_odd(int n){
    if(n%2 == 0){
       return 0;
       }
    else{
        return 1;
    }
}

int main(){
    int a;
    cin>>a;
    int ans = even_odd(a);
    
    if(ans == 1){
        cout<<"Odd"<<endl;
    }else {
        cout<<"Even"<<endl;
    }
}