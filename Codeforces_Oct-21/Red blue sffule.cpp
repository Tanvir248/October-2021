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
ls print_soln(ll ans1,ll ans2){
    if(ans1>ans2){
        return "RED";
    }else if(ans2>ans1){
      return "BLUE";
    }else{
      return "EQUAL";
    }
}
void solve(ll n, ls s, ls ss){   
  ll cnt1=0,cnt2=0;
      for (ll i = 0; i < n; i++)
      {
        if(s[i]>ss[i]){
          cnt1++;
        }else if(s[i]<ss[i]){
        cnt2++;
        }else{
          cnt1++, cnt2++;
        }
      }
    cout<<print_soln(cnt1, cnt2);
    ed    
}
int main(){
     speed();
   //freopen("input.txt", "r", stdin);
lln t;
    cin>>t;
    while(t--){
   ll n;
   ls s, ss;
   cin>>n>>s>>ss;
   solve(n, s,ss);
    } 
     return 0;
}