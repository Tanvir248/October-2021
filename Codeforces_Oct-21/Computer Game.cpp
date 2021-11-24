#include<bits/stdc++.h>
using namespace std;
using lln = long long int;
using ls = string;
using ch = char;
using lld = long double;
using lf = float;
using ll= int;
using ld = double;
#define pb  push_back
#define eb emplace_back
#define B begin()
const int MOD = 1000000007;
const int INF = 0x3f3f3f3f;
#define E end()
#define sz size()
#define vi vector<int>
#define mi map<int, int>
#define pi pair<int, int>
#define yes cout<<"YES"<<endl;
 #define no cout<<"NO"<<endl;
 #define ed cout<<endl;
const int N = int(2e5 + 5);
void speed(){
    ios::sync_with_stdio(0);
	  cin.tie(0);
          cout.tie(0);
}
void print_soln_true(){
    yes
}
void print_soln_false(){
    no
}
bool solve(ls s,ls temp,ll cnt){   
   
    for (ll i = 0; i < s.sz; i++)
    {
       if(s[i]=='1'&&temp[i]=='1'){
            cnt++;
       }
    }
    if(cnt==0){
        return true;
    }else
       return false;
}
int main(){
     speed();
 //freopen("input.txt", "r", stdin);
lln t;
    cin>>t;
    while(t--){
        lln n;
        ls s, s1;
        cin>>n>>s>>s1;
        if(solve(s, s1, 0)==true){
            print_soln_true();
    }else{
          print_soln_false();
        
    }
    } 
     return 0;
}