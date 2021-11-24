#include<iostream>
using namespace std;
int main(){
  char ch[]= {'c', 'b', 'x', 'd', 'e','f', 'z', 'h'};

// Every char value and every string value has inbuild '\0' mean space
    int sizeOf = -1;
    for (int i = 0; ch[i] != '\0'; i++)
    {
      sizeOf++;
    }
  cout<<sizeOf<<endl;
  
  }

