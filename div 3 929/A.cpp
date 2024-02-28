#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int max_sum = 0;
        for (int i = 0; i < n; i++) {
            max_sum += abs(arr[i]);
        }
        
        cout << max_sum << endl;
    }

    return 0;
}
