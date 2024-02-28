#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
    int tc; 
    cin >> tc;
    while (tc--) {
        // idea behind the question is to iterate to left to right and pour the access water in the next container 
        // if the water in each container is smaller then w/n then it is not possible 
       
       int n;
       int okay = 1; // if it is 1 then it is ok and if 0 then not ok 
       int extra = 0;// amount of water that are extra 
       cin>>n;
       vector<int>v(n);
       for(auto &i:v){
           cin>>i;
       }
       
       int per = accumulate(v.begin(),v.end(),0ll) / n;
       
       for(auto &i : v){
           if(i+extra < per) {
               okay = 0;
           }   
           else {
               extra =  (i+extra)-per;
           }
       }
       
       cout<<(okay ? "YES\n" : "NO\n");
      
    }
}
