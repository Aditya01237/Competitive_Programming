#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    vector<int> primes;
    vector<bool> IsPrime(5000000,true);
    for(int i=2;i*i<5000000;i++){
        if(IsPrime[i]){
            for(int j=i*i ;j<5000000;j+=i){
                IsPrime[j] = false;
            }
        }
    }
    for(int i=2;i<5000000;i++){
        if(IsPrime[i]){
            primes.push_back(i);
        }
    }
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        cout << primes[a-1] << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}