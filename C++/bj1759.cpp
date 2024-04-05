//
// Created by 이혜연 on 2023/09/18.
//
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


int main(){
    int l, c;
    cin >> l >> c;
    vector<char> v(c);
    vector<bool> m(c);
    for (int i = 0; i < c; i++){
        cin >> v[i];
        m[i] = false;
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < c; i++){
        if(v[i] == 'a' || v[i] == 'e' || v[i] == 'i' || v[i] == 'o' || v[i] == 'u'){
            m[i] = true;
        }
    }



}