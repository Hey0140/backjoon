
//
// Created by Hyeon on 2023-09-05.
//

#include <iostream>
#include <algorithm>
using namespace std;

int cmp(string a, string b){
    if (a.size() == b.size())
        return a < b;
    else
        return a.size() < b.size();
}

int main(){
    int n;
    cin >> n;
    string word[n];
    for(int i = 0; i < n; i++){
        cin >> word[i];
    }

    sort(word, word+n, cmp);

    for(int i = 0; i < n; i++){
        if (i < n -1 && word[i] == word[i+1])
            continue;
        cout << word[i] << "\n";
    }


}
