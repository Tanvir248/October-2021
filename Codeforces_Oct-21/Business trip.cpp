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
bool cmp(int a, int b){
    return a>b;
}
ll solve(ll cntmonth ,ll sum){   
     
    ll n;
    cin>>n;
    ll arr[12];
     for (ll i = 0; i < 12; i++)
     {
         ll num;
      cin>>num;
        arr[i]=num;
     }
     if(n==0){  
            return 0;
     }
     sort(arr, arr+12, cmp);
    //  for (ll i = 0; i < 12; i++)
    //  {
    //      cout<<arr[i]<<" ";
    //  }
     
     for (ll i = 0; i < 12; i++)
     {
         sum+=arr[i];
         cntmonth++;
         if(sum>=n){
             return cntmonth;
         }
     }
         return -1;
  }
int main(){
     speed();
   //freopen("input.txt", "r", stdin);
 cout<<solve(0 , 0);
 ed
     return 0;
}