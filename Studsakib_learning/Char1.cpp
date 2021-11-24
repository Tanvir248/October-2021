#include<iostream>
using namespace std;
int main(){
  char ch[]={'a', 'b', 'c', 'd', 'e'};
    //in>>ch;
    for (int i = 0; i < sizeof(ch); i++)
    {
        cout<<ch[i]<<" ";
    }
    
}
// int arr[]= {2, 3, 4, 5, 6}