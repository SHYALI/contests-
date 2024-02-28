#include <iostream>
#include <vector>

using namespace std;

// Function to generate the permutation
vector<int> generate_permutation(int n) {
    vector<int> permutation;
    for (int i = n; i >= 1; --i) {
        permutation.push_back(i);
    }
    return permutation;
}

int main() {
    int t;
    cin >> t; // Input number of test cases
    
    while (t--) {
        int n;
        cin >> n; // Input length of permutation
        
        // Generate and output the permutation
        vector<int> permutation = generate_permutation(n);
        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
