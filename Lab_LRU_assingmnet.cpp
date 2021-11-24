#include <iostream>
#include<unordered_set>
#include<vector>
#include<unordered_map>
#include<algorithm>
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
const int Maxn = int(2e5 + 5);
ll n;
ll frame_size;
ll pages[Maxn];

void LRU(){
 unordered_set<ll> s;
 unordered_map<ll, ll> indexes;
 //unordered_map<int, int> ::iterator *it;
 ll page_faults = 0;

 for (int i = 0; i < n; i++){
    if (s.find(pages[i]) != s.end()){
         cout << "Reference to page " << pages[i] << " did not cause a page fault"<<endl;
        }else{
        if (s.size() < frame_size){
         s.insert(pages[i]);
        page_faults++;
             }else{
                int lru = INT_MAX, val;
                for (int it = 0 ; it < indexes.size(); it++ ){
                if (indexes[it] < lru){
                    lru = indexes[it];
                    val = it;
                    }
            }
            s.erase(val);
            s.insert(pages[i]);
            page_faults++;
            }
    cout <<"Reference to page "<< pages[i] << " caused a page fault"<<endl;
            }
        indexes[pages[i]] = i;
        }
        cout << "\nTotal Page Faults: " << page_faults << endl;
}
int main(){
    cout << "Enter Number of Frames: ";
        cin >> frame_size;
    cout << "Enter Number of Process: ";
        cin >> n;
    cout << "Enter Page Reference of the Processes:\n";
        for (int i = 0; i < n; i++){
             cin >> pages[i];
      }
        LRU();
 return 0;
}