#include <bits/stdc++.h>
using namespace std;
#define ll long long
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n,k;
    cin >> n;
    int start = 1;
    int dist = 0;
    while(n>0){
        for(int i=2;i<=n;i+=2){
            cout << start*i + dist << " ";
        }
        if(n&1)cout << start+dist << " ",dist += start;
        else dist -= start;
        start <<= 1;
        n >>= 1;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}