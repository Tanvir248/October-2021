#include<iostream>
using namespace std;
void sequence(int n){
    // Implement
    for (int i = 1; i <= 10; i++)
    {
        cout<<i<<"*"<<n<<" = "<<i*n<<endl;
    }
    
}
int main(){
    int sakib;
    cin>>sakib;
    // n = 7
    sequence(sakib);
}