//
// Created by 이혜연 on 2023/09/19.
//
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> v(s.size());
    for(int i = 0; i < v.size(); i++){
        v[i] = s.substr(i, v.size()-i );
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << '\n';
    }
}
