
#include <iostream>
using namespace std;
int s[10][10];
int g[12][12];
int main(){
    int n;
    cin >> n;
    int score[n];
    string sg = "";
    for(int i = 0; i < 10; i++){
        for( int j = 0; j <10; j++){
            cin >> s[i][j];
        }
    }
    for(int i = 0; i < 12; i++){
        for( int j = 0; j <12; j++){
            cin >> g[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        string temp;
        cin >> score[i];
        cin >> temp;
        sg = sg + temp;
    }



}
