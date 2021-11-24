//universal value
#include<iostream>
using namespace std;
// without paramerter function.. this access every function -->

int a;//universal value

int retrunSomething2(){
    return a - 2;
}
int retrnsometing1(){
    return a- 1;
}
int main(){

    cin>>a;
    int x = retrnsometing1();
    int y = retrunSomething2();
    cout<<x<<" "<<y<<endl;
}