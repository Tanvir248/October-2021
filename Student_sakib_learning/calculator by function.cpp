//Mr. Sakib Calculator
#include<iostream>
using namespace std;

void sum(int number1, int number2){
    cout<<"Sum of numbers is: "<<number1+number2;
}
void divide(int number1, int number2){
    if(number1>=number2)
    cout<<"div of numbers is: "<<number1/number2;
    else{
        cout<<"div of numbers is: "<<number2/number1;
    }
}
void multiplecation(int number1 , int number2){
    cout<<"Multiplication is: "<<number1*number2;
}
void substruct(int number1, int number2){
    if(number1>=number2)
    cout<<"substruct of numbers is: "<<number1-number2;
    else{
        cout<<"substruct of numbers is: "<<number2-number1;
    }   
}
void conditions(){
    cout<<"Click 0 for break: \n Click 1 for summetion: \n Click 2 for substruct: \n Click 3 for Divide: \n Click 4 for Multiplicaton:"<<endl;
   
}
void take_input(){

   int n, n1 , n2;
    while(true){
    
    conditions();
    cout<<"Enter two number: "<<endl;
        cin>>n1>>n2;
    cout<<"Click any number: ";
    cin>>n;
    
    if(n==0){
        break;
    }
    if(n==1){
    sum(n1, n2);
    } 
    if(n==2){
        substruct(n1, n2);
    }
    if(n==3){
        divide(n1, n2);
    }
    if(n==4){
        multiplecation(n1, n2);
    }
    cout<<endl;
}
}

int main(){
  
    take_input();

    cout<<endl;
}