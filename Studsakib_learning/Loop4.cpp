#include<iostream>
using namespace std;
int main(){
    int number;
    cin>>number;
    int x = number*4;
    for (int i = 1; i <= x; i++)
    {
        if(i%4==0){
            cout<<"PUM"<<endl;
        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}