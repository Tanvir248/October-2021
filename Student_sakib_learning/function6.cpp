#include<iostream>
using namespace std;
// universal value
int n;

string even_ood_Print(){
    if(n%2 ==0 ){
        return "Even";
    }else{
        return "Odd";
    }
}  
int return_Half_N_Value(){
    return n/2;
}

void printN(){
    cout<<n<<endl;
}

int main(){
   
    cin>>n; // n = 20..

    printN();

    //another way to funciotn print
    cout<<even_ood_Print()<<endl;

    cout<<return_Half_N_Value()<<endl;

    printN();

}
/*Output:
20
20
Even
10*/