#include<iostream>
using namespace std;
int main(){
  char ch[]= {'c', 'b', 'x', 'd', 'e','f', 'z', 'h'};

// reverse a char by using loop 

cout<<"Exact Value: ";
      for (int i = 0; i < sizeof(ch); i++)
      {
        cout<<ch[i];
      }cout<<endl;

cout<<"Reversed Value: ";
      for (int i = sizeof(ch)-1; i >=0 ; i--)
      {
        cout<<ch[i];
      }cout<<endl;
      
}
/*
i = 7 
  ch[7]= h
  i = 6
  ch[6] = z;
  i = 5
  ch[5] = f
  ...
  i = 0
  ch[0]= c
*/
