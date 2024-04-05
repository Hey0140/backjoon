#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n);
    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i ++){
        int temp;
        cin >> temp;
        int up = upper_bound(a, a+n, temp) - a;
        int low = lower_bound(a, a + n, temp)-a;
        b[i] = up - low;
    }

    for ( int i = 0; i < m; i++){
        cout << b[i] << " ";
    }
}