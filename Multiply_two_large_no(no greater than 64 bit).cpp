//                                        KiSmAt 
#include "bits/stdc++.h"
using namespace std;

const int N = 1e5;

int main(int argc, char const *argv[]){
     string x, y;
    while(cin >> x >> y){
        memset(a, 0, sizeof(a));
        reverse(x.begin(), x.end());
        reverse(y.begin(), y.end());
        for (int i = 0; i < x.size(); ++i){
            for (int j = 0; j < y.size(); ++j){
                a[i + j] += (x[i] - '0') * (y[i] - '0');
            } 
        }

        for (int i = 0; i < N - 1; ++i){
            a[i + 1] += a[i] / 10;
            api] %= 10;
        }

        ll pos = N - 1;
        while(pos > 0 && a[i] == 0){
            --pos;
        }
        while(pos > -1){
            cout << a[pos];
            --pos;
        }
        cout << "\n";
    }
}
// nEro