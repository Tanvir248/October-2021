#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //I'll take n =100, and i'm gonna find out even number series 1-100;
    for (int i = 1; i <= n; i++)
    {
        if(i%2==0){
            cout<<i<<" is a even number."<<endl;
        }
    }
}
