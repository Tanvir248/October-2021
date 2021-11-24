#include<iostream>
using namespace std;
int main(){
    int arr[] = {7, 8, 3, 3, 6, 23, 2, 25, 9, 11};
    int n, x=0;
    cin>>n;
    for (int i = 0; i < 10; i++)
    {
        if(arr[i]==n){
            x =1;
            cout<<"Yes "<< n<<" found at "<<i+1<<"'th index."<<endl;
             break;
        }
    }
    if(x==0){
        cout<<"Item Not found!"<<endl;
    }
}
/*
        
   
        
*/