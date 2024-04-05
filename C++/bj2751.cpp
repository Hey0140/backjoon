//
// Created by 이혜연 on 2023/09/25.
//
#include <iostream>
#include <map>

using namespace std;
map<short, int> m;

int main(){
    int n;
    cin >> n;
    for ( int i = 0; i < n;i ++){
        short a;
        cin >> a;
        if ( m.find(a) == m.end() ){
            m[a] = 1;
        }
        else{
            m[a]++;
        }

    }
    for( auto i = m.begin(); i != m.end(); i++){
        for( int j = 0; j < i->second; j++){
           cout << i->first << "\n";
        }
    }
}