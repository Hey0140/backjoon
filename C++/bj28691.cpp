//
// Created by Hyeon on 2023-09-06.
//
#include <iostream>

using namespace std;
int main() {
    char ch;
    cin >> ch;

    if(ch == 'M')
        cout << "MatKor";
    if(ch == 'W')
        cout << "WiCys";
    if(ch == 'C')
        cout << "CyKor";
    if(ch == 'A')
        cout << "AlKor";
    if(ch == '$')
        cout << "$clear";
}