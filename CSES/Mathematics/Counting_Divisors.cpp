#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

ll const N = 1000005;
ll is_prime[N];


// help us to find highest prime factor of any number
void isPrime(int n) {
    for (int i=1; i<=n; i++){
        is_prime[i] = i;
    }
    for (int p=2; p*p<=n; p++) {
        if (is_prime[p] == p) {
            for (int i=p*p; i<=n; i += p) 
                if (is_prime[i]==i) is_prime[i]=p; 
        }
    } 
}

void solve(){
    ll n;
    cin >> n;
    int count = 1;
    while(n != 1){
        int y = is_prime[n];
        int c = 1;
        while(n%y == 0){
            c++;
            n /= y;
        }
        count *= c;
    }
    cout << count << "\n";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    isPrime(1000000);
    while(t--){
        solve();
    }
    return 0;
}