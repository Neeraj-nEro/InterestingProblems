//                                        KiSmAt 
#include "bits/stdc++.h"
using namespace std;

typedef long long  ll;

const int N = 1e5 + 10;
const long long NN = 2 * 1e2 ;
const long long INF = 1e18;
const long long mod = 1e9 + 7;

vector<ll> v[N];
vector<ll> ans;

ll res;
ll a[N];
ll visit[NN];

void Topological_Sort(ll node){
    visit[node] = 1;
    for(auto i: v[node]){
        if(!visit[i]){
            Topological_Sort(i);
        }
    }
    ans.push_back(node);
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    ll n, k, w, x;
    scanf("%lld%lld", &n, &k);

    for (int i = 1; i <= k; ++i){
        scanf("%lld", &w);
        while(w--){
            scanf("%lld", &x);
            v[i].push_back(x);
        }
    }

    for (int i = 1; i <= n; ++i){
        if(!visit[i]){
            Topological_Sort(i);
        }
    }

    for (int i = n - 1; i >= 0; --i){
        a[ans[i]] = res;
        res = ans[i];
    }

    for (int i = 1; i <= n; ++i){
        printf("%lld\n", a[i]);
    }

}
// nEro