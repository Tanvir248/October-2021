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
lln arr[20000][10];
void print_soln_true(){
    yes
}
void print_soln_false(){
    no
}
bool solve(lln n){   
   ll cnt=0;
      ll p;
       ll q;
       ll z;        
     for(ll i=0; i<5; i++)
        {
            for(ll j=0; j<5; j++)
            {
                if(i==j)
                    continue;
                       p=0;
                q=0;
                for(ll l=0; l<n; l++)
                {
                    p+=(arr[l][i]==1 && arr[l][j]==0);
                }
                 z=0;
                if(p<n/2)
                {
                    for(ll l=n-1; l>=0; l--)
                    {
                        p+=(arr[l][i]==1 && arr[l][j]==1);
                        z+=(arr[l][i]==1 && arr[l][j]==1);
                        if(p==n/2)
                            break;
                    }
                }
                for(ll l=0; l<n; l++)
                {
                    q+=(arr[l][i]==0 && arr[l][j]==1);
                }
                if(q<n/2)
                {
                    for(ll l=0; l<n; l++)
                    {
                        q+=(arr[l][i]==1 && arr[l][j]==1);
                    }
                    q-=z;
                }
                if(p>=n/2 && q>=n/2)
                    cnt++;
            }
}
    if(cnt==0){
        return true;
    }else{
        return false;
    }
}
int main(){
     speed();
 freopen("input.txt", "r", stdin);
lln t;
    cin>>t;
    while(t--){
    lln n;
    cin>>n;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    if(solve(n)==true){
        print_soln_false();
    }else{
        print_soln_true();
    }
    }
     return 0;
}