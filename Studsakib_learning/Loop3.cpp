#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    //I'll take n =100, and i'm gonna find out even number series 1-100;
    int x =0;
    for (int i = 2; i <= n-1; i++)
    {
       if(n%i==0){
           x = 1;
            break;
       }
    }
    if(x==1){
        cout<<n<<" is not a prime number!"<<endl;
    }else{
        cout<<n<<" is a prime number!"<<endl;
    }
}
