#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    int tc; 
    cin >> tc;

    while (tc--) {
        int n;
        cin >> n;
        vector<int> A(2 * n);
        for(int i = 0; i < 2 * n; i++){
            cin >> A[i];
        }
        sort(A.begin(), A.end());
        int maximum = 0;
        for(int i = 0; i < n; i++){
            maximum += A[i * 2];
        }
        cout << maximum << endl;
    }
    return 0;
}
