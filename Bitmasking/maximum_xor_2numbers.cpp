// C++ program to find the maximum
// XOR value of two elements in an array
#include <bits/stdc++.h>
using namespace std;

// Function to find the maximum XOR
int maxXOR(vector<int> &arr) {
    int res = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            res = max(res, arr[i] ^ arr[j]);
        }
    }
    return res;
}

int main() {
    vector<int> arr = {25, 10, 2, 8, 5, 3};
    cout << maxXOR(arr);
    return 0;
}
