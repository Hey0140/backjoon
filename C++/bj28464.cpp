//
// Created by Hyeon on 2023-09-04.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n;
    int q, s;
    q = 0; s = 0;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.rbegin(), a.rend());
    int low, high;
    low = 0; high = n-1;
    while (low <= high){
        q = q + a[low];
        low++;
        if (low <= high){
            s = s + a[high];
            high--;
        }
    }
    cout << s <<" " << q;
}