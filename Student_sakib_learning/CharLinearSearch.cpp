#include<iostream>
using namespace std;
int main(){
  char ch[]= {'c', 'b', 'x', 'd', 'e','f', 'z', 'h'};
   //value of search items!

   char searchFor = 'x';

   //cout<<searchFor<<endl;
 // first value of index

    int index = 0;
    for (int i = 0; i < sizeof(ch); i++)
    {
      if(ch[i] == searchFor){
          index = i+1;
          break;
      } 
    }
    if(index == 0) {
      cout<<"Item not available."<<endl;
    }else
          cout<<index<<endl;
}
// int arr[]= {2, 3, 4, 5, 6}
/*
    i = 0;
    ch[0] = c
    i = 1;
    ch[1]= b;
    i = 2;
    ch[2]= x;
    found; now loop break;
    print  index ;
*/