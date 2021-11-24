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
lln n, k;
lln binary_power(lln x, lln y) {
    x %=MOD;
    lln res = 1;
    while (y > 0) {
        if (y & 1){
             res = res * x % MOD;
        }
        x = x * x % MOD;
        y >>= 1;
    }
    return res;
}
lln prin_ans(ls s,lln myans){
     for(int i=0;i<32;i++){
        bool flag;
        if(s[i]=='1'){
            flag =true;
            }else{
                 flag=false;
            }
            if(flag ==true){
                 myans = (myans + binary_power(n,i))%MOD;
            }
     }   
 return myans;   
}
int main(){
     speed();
 //  freopen("input.txt", "r", stdin);
lln t;
    cin>>t;
    while(t--){
      cin>>n>>k;
      ls s = bitset<32>(k).to_string();
    reverse(s.begin(),s.end());
      cout<<prin_ans(s, 0); 
 ed
    }
} 