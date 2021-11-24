#include<iostream>
using namespace std;

// retrun string value
string even_odd(int n){
    if(n%2 == 0){
       return "Even";
       }
    else{
        return "Odd";
    }
}

int main(){
    int a;
    cin>>a;
    string ans = even_odd(a);
    cout<<ans<<endl;
}