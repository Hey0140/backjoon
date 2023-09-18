//
// Created by 이혜연 on 2023/09/18.
//
#include <iostream>
using namespace std;

int main(){
    int x;
    cin >> x;
    unsigned int sum = 0;
    int ci = 0;
    for ( int i = 1; i <= x; i++){
        sum = sum + i;
        if (sum >= x){
            ci = i;
            break;
        }
    }
    int a, b;
    if ( x == 1){
        cout << 1 <<'/' << 1 << '\n';
    }
    else if( sum == x){
        if ( ci  % 2 == 1 ){
            a = 1;
            b = ci;
        }
        else{
            a = ci;
            b = 1;
        }
        cout << a << '/' << b << '\n';
    }
    else{
        sum = sum - x;
        if ( ci % 2 == 1 ){
            a = 1 + sum;
            b = ci - sum;
        }
        else{
            a = ci - sum;
            b = 1 + sum;
        }
        cout << a << '/' << b << '\n';
    }
}