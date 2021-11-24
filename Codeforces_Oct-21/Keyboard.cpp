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
 void print_soln(ls print){
     cout<<print<<endl;
 }
ls solve(ls ansl,ls ansr){   
    //  freopen("input.txt", "r", stdin);
ansl.clear(), ansr.clear();
  ls s1 ="qwertyuiopasdfghjkl;zxcvbnm,./";
    ls direction, s;
    cin>>direction>>s;
    if(direction == "R"){
        for (ll i = 0; i < s.sz; i++)
        {
            for (ll j = 0; j < s1.sz; j++)
            {
                if(s[i]==s1[j]){
                    ansr.pb(s1[j-1]);
                        break;    
                   }
            }
            
        }
        return ansr;
    }else if(direction == "L"){
        for (ll i = 0; i < s.sz; i++)
        {
            for (ll j = 0; j < s1.sz; j++)
            {
                if(s[i]==s1[j]){
                    ansl.pb(s1[j+1]);
                        break;    
                   }
            }
            
        }return ansl;
    }
 }
int main(){
     speed();

   ls x = solve("Fuck","Fuck");
   print_soln(x);
     return 0;
}