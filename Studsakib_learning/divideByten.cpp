#include<iostream>
using namespace std;

bool isDividedByTen(int n ){
    if(n%10== 0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(isDividedByTen(n)){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}