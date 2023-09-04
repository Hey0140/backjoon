//
// Created by Hyeon on 2023-09-04.
//
#include <iostream>

using namespace std;
int main(){
    char dir;
    char land1, land2, land3, land4;
    string result;
    cin >> dir;
    if (dir == 'N'){
        cin >> land1 >> land2 >> land3 >> land4;
        if(land1 == '.' && land2 == 'P' && land3 == 'O' && land4 == '.')
            result = "T";
        else if(land1 == 'P' && land2 == '.' && land3 == '.' && land4 == 'I')
            result = "F";
        else if(land1 == 'P' && land2 == '.' && land3 == '.' && land4 == 'O')
            result = "Lz";
        else
            result = "?";
    }
    else if (dir == 'S'){
        cin >> land1 >> land2 >> land3 >> land4;
        if(land1 == '.' && land2 == 'O' && land3 == 'P' && land4 == '.')
            result = "T";
        else if(land1 == 'I' && land2 == '.' && land3 == '.' && land4 == 'P')
            result = "F";
        else if(land1 == 'O' && land2 == '.' && land3 == '.' && land4 == 'P')
            result = "Lz";
        else
            result = "?";
    }
    else if (dir == 'E'){
        cin >> land1 >> land2 >> land3 >> land4;
        if(land1 == 'O' && land2 == '.' && land3 == '.' && land4 == 'P')
            result = "T";
        else if(land1 == '.' && land2 == 'P' && land3 == 'I' && land4 == '.')
            result = "F";
        else if(land1 == '.' && land2 == 'P' && land3 == 'O' && land4 == '.')
            result = "Lz";
        else
            result = "?";
    }
    else if (dir == 'W'){
        cin >> land1 >> land2 >> land3 >> land4;
        if(land1 == 'P' && land2 == '.' && land3 == '.' && land4 == 'O')
            result = "T";
        else if(land1 == '.' && land2 == 'I' && land3 == 'P' && land4 == '.')
            result = "F";
        else if(land1 == '.' && land2 == 'O' && land3 == 'P' && land4 == '.')
            result = "Lz";
        else
            result = "?";
    }

    cout << result;

}