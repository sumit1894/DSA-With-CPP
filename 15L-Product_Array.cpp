#include <bits/stdc++.h>
using namespace std;

vector<int> bruteForceArrayProduct(vector<int> &arr) {
    int n = arr.size();
    vector<int> result(n, 1); // initialize the vector with 1.
    for (int i = 0; i < n; i++) { // O(n)
        int product = 1;
        for (int j = 0; j < n; j++) { // O(n)
            if (i != j) {
                product = product * arr[j];
            }
        }
        result[i] = product;
    }
    return result; // O(n^2)
}

vector<int> lessOptimizedArrayProduct(vector<int> &arr) {
    int n = arr.size();
    vector<int> result(n, 1);

    vector<int> prefix(n, 1); // O(n)
    vector<int> suffix(n, 1); // O(n)

    for (int i = 1; i < n; i++) { // O(n)
        prefix[i] = arr[i - 1] * prefix[i - 1];
    }

    for (int j = n - 2; j >= 0; j--) { // O(n)
        suffix[j] = suffix[j + 1] * arr[j + 1];
    }
    for (int i = 0; i < n; i++) { // O(n)
        result[i] = prefix[i] * suffix[i];
    }
    return result; // O(3n) --> O(n)
}

vector<int> optimizedArrayProduct(vector<int> &arr) {
    int n = arr.size();
    vector<int> result(n, 1);
    for (int i = 1; i < n; i++) {
        result[i] = result[i - 1] * arr[i - 1];
    }
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--) {
        suffix = suffix * arr[i + 1];
        result[i] = result[i] * suffix;
    }

    return result;
}

int main() {

    vector<int> arr = {1, 2, 3, 4}; // need --> sc O(1) & tc O(n)

    cout << "----------------------------Brute Force---------------------------" << endl << endl;

    vector<int> res1 = bruteForceArrayProduct(arr);
    for (int i = 0; i < res1.size(); i++) {
        cout << res1[i] << " ";
    }

    cout << endl << endl << "------------------------Less-Optimized------------------------" << endl << endl;

    vector<int> res2 = lessOptimizedArrayProduct(arr);
    for (int i = 0; i < res2.size(); i++) {
        cout << res2[i] << " ";
    }

    cout << endl << endl << "------------------------Optimized------------------------" << endl << endl;

    vector<int> res3 = optimizedArrayProduct(arr);
    for (int i = 0; i < res3.size(); i++) {
        cout << res3[i] << " ";
    }

    cout << endl << endl << "------------------------The End------------------------" << endl << endl;

    return 0;
}




