//
// Created by 이혜연 on 2023/09/19.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int arr[100001];

int comp(vector<int> a, vector<int> b){
    if (a[2] == b[2])
        return a[0] < b[0];
    return a[2] < b[2];

}
int compare(vector<int> a, vector<int> b){
    if (a[0] == b[0])
        return a[1] < b[1];
    return a[0] < b[0];

}

int count( vector<pair<int, int> > a, int i, int n){
    int temp = 1;
    if( arr[i] != 0){
        return arr[i];
    }

    int start = a[i].second;
    for(int j = i + 1; j < n; j++){
        bool flag = false;
        if(start <= a[j].first){
            int t = 1 + count(a, j, n);
            if( temp < t){
                temp = t;
                flag = true;
            }
        }
        if(flag == true)
            break;
    }
    return arr[i] = temp;
}

int main(){
    int n;
    cin >> n;
    vector< vector<int> > v(n);vector< vector<int> > cv(n);
    for (int i = 0; i < 100001; i++){
        arr[i] = 0;
    }
    for (int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        v[i].push_back(a);
        v[i].push_back(b);
        v[i].push_back(b-a);
    }
    sort(v.begin(), v.end(), comp);
    int max = 0;

    for(int i = 0; i < n; i++){
        int cou;

        if (max < cou){
            max = cou;
        }
    }

    cout << max;
}