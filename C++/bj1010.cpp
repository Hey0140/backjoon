//
// Created by Hyeon on 2023-09-07.
//
#include <iostream>

using namespace std;
int marray[31][31];

int com(int n, int r){
    if(n == r || r == 0)
        return marray[n][r] = 1;
    if(marray[n][r] > 0)
        return marray[n][r];
    else{
        marray[n][r] = com(n - 1, r - 1) + com(n - 1, r);
        return marray[n][r];
    }

}

int main(){
    for(int i = 0; i < 31; i ++){
        for(int j = 0; j < 31; j++) {
            marray[i][j] = 0;
        }
    }
    int h;
    cin >> h;
    for (int i = 0; i < h; i++){
        int n, m;
        int result = 0;
        cin >> n >> m;
        result = com(m,n);
        cout << result<< '\n';
    }
}