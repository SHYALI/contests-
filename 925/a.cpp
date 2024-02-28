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
        
       int n;
       cin>>n;
       
       vector<char>v(27);
       char ch ='a';
       for(int i=1;i<=26;i++){
           v[i] = ch++;
       }
       if(n<=28){
           int temp = n-2 ;
           cout<<"aa"<<v[temp]<<endl;
       }
       else if(n<=53){
           n-=26;
           int temp = n-1;
           cout<<"a"<<v[temp]<<"z"<<endl;
       }
       else{
           n-=52;
           int temp = n;
           cout<<v[temp]<<"zz"<<endl;
       }
    }
    return 0;
}
