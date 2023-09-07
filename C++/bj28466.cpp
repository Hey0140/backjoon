
#include <iostream>
using namespace std;
int s[10][10];
int g[12][12];
int main(){
    bool seflag = false;
    bool snflag = false;
    bool geflag = false;
    bool gnflag = false;


    int n;
    cin >> n;
    int score[n];
    string sg = "";
    int tflag = 0;
    for(int i = 0; i < 10; i++){
        for( int j = 0; j <10; j++){
            cin >> s[i][j];
        }
        for( int j = 0; j <10; j++){
            if (i == j && s[i][j] == 0)
                tflag = 1;
            if(i != j && s[i][j] != 0)
                tflag = tflag + 1;
        }
    }
    if (tflag == 10){
        seflag = true;
    }
    tflag = 0;
    for(int i = 0; i < 12; i++){
        for( int j = 0; j <12; j++){
            cin >> g[i][j];
        }
        for( int j = 0; j <12; j++){
            if (i == j && s[i][j] == 0)
                tflag = 1;
            if(i != j && s[i][j] != 0)
                tflag = tflag + 1;
        }
    }
    if (tflag == 12){
        geflag = true;
    }
    for(int i = 0; i < n; i++){
        string temp;
        cin >> score[i];
        cin >> temp;
        sg = sg + temp;
    }

    int max = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            for(int l = j + 1; l < n; l++){
                int temp, in, jn, ln, gi, gj, gl, si, sj, sl;
                si = int(sg[i * 2]) - 48; gi = i * 2 + 1;
                sj = int(sg[j * 2]) - 48; gj = j * 2 + 1;
                sl = int(sg[l * 2]) - 48; gl = l * 2 + 1;
                in = int(sg[gi]) - 65;
                jn = int(sg[gj]) - 65;
                ln = int(sg[gl]) - 65;

                temp = score[i] + score[j] + score[l] +
                        s[si][sj] + s[sj][sl] + s[si][sl]+
                        g[in][jn] + g[jn][ln] + g[in][ln];

                if (max < temp)
                    max = temp;
            }
        }
    }

    for (int i = 0; i < n - 2; i++){
        int j = i + 1; int l = j + 1;
        for(; l < n; j++){

        }
    }

    cout << max;

}
