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
#define vi vector<ll>
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
ls print_soln(){
  
}
ls solve(ls s){   
      return s;
}
int main(){
     speed();
   //freopen("input.txt", "r", stdin); 
     vi add;
ls x;
lln t;
    cin>>t;
    lln n=t;
    while(t--){
  ls s;
  cin>>s;
  if(t==(n-1)){
   x = solve(s);
  // cout<<t<<endl;
   }
   //cout<<x<<endl;
   //cout<<s.sz<<endl;
        ll cnt =0;
   for (ll i = 0; i < s.sz; i++)
   {
     if(x[i]==s[i]){
       cnt++;
     }else{
       break;
     }
     }
   add.pb(cnt);
  // cout<<cnt<<endl;
   }
cout<<*min_element(add.B, add.E)<<endl;   
     return 0;
}