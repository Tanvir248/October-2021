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
void print_soln(){
  
}
void solve(lln n,lln a, lln b){   
       ll ar[n];
        for (ll i = 0; i < a; i++)
        {
            ll x;
            cin>>x;
            ar[x]=1;
        }
        for (ll i = 0; i < b; i++)
        {
            ll y;
            cin>>y;
            if(ar[y] !=1){
                ar[y]=2;
            }
    }

    cout<<ar[1]<<" ";
     for (ll i = 2; i <= n; i++)
     {
         cout<<ar[i]<<" ";
     }     
     
      ed
}
int main(){
     speed();
   //freopen("input.txt", "r", stdin);
lln t, a, b;

    cin>>t>>a>>b;
   solve(t,a, b);
    
     return 0;
}