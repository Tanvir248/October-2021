#include<iostream>
#include<algorithm>
using namespace std;
int main(){
string s;
  cin>>s;
  cout<<"Exact value is: "<<s<<endl;

cout<<"Reversed Value is: ";
  for (int i = s.size()-1; i>=0; i--)
  {
    cout<<s[i];
  }cout<<endl;
  
 }
/*
5
4 6 7 2 1
  
  10
  5 3 2 6 3 2 4 5 2
*/