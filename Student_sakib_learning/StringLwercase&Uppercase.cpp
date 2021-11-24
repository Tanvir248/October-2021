
#include<iostream>
using namespace std;
int main(){
  string s ="BROTHER";
 //the code for make lowercase string to uppercase.
 cout<<"My string is : "<<s<<endl;
 cout<<"Lowercase string is: ";
  for (int i = 0; i < s.size(); i++)
  {
    //sum = sum+1;
   s[i] = s[i] + 32;
    cout<<s[i];
  }
  cout<<endl;
  
}