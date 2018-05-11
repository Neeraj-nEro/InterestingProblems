//                                        KiSmAt 
#include "bits/stdc++.h"
using namespace std; 

const int N = 1e5 + 10;
const long long NN = 2 * 1e2 ;

char grid[NN][NN];
bool visit[NN][NN];

int dx[8] = {0, 0, -1, -1, -1, 1, 1, 1};
int dy[8] = {1, -1, 0, -1, 1, 0, -1, 1};

bool valid(int x, int y, int n){
    return x >= 0 && y >= 0 && x < n && y < n && !visit[x][y] && grid[x][y] == '1';   
}

void dfs(int x, int y, int n){
    if(visit[x][y]){
        return;
    }
    visit[x][y] = 1;

    for (int i = 0; i < 8; ++i){
        int xx = dx[i] + x;
        int yy = dy[i] + y;
        if(valid(xx, yy, n))
            dfs(xx, yy, n);
    }
}


int main(int argc, char const *argv[]){
    //ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n, t = 1;
    while(scanf("%lld", &n) != EOF){
        for (int i = 0; i < n; ++i){
            scanf("%s", grid[i]);
        }
        memset(visit, 0, sizeof(visit));
        res = 0;
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < n; ++j){
                if(valid(i, j, n)){
                    dfs(i, j, n);
                    ++res;
                }
            }
        }
        //printf("Image number %lld contains %lld war eagles.\n", t++, res);
        cout << "No of connected component : " << res;
    }
}
// nEro