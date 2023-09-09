//
// Created by Hyeon on 2023-09-08.
//

#include <iostream>

using namespace std;
int array[5001];

int com(int n) {
    if(n < 3 || n == 4){
        return array[n] = -1;
    }
    if (array[n] > 0)
        return array[n];

    if (n % 5 == 0)
        return array[n] = n / 5;
    else if (n % 3 == 0) {
        if(n - 5 >= 0){
            array[n - 5] = com(n - 5);
            if(array[n - 5] != -1 && n/3 > array[n - 5])
                return array[n] = array[n - 5] + 1;
            else
                return array[n] = n / 3;
        }
        else
            return array[n] = n/3;
    }
    else{
        if(n - 5 >= 0){
            array[n - 5] = com(n - 5);
            if(array[n - 5] != -1)
                return array[n] = array[n - 5] + 1;
            else
                return array[n] = -1;
        }
    }

}

int main(){
    for(int i = 0; i < 5001; i ++){
        array[i] = 0;
    }
    int h;
    cin >> h;
    int r = com(h);;
    cout << r;
}
