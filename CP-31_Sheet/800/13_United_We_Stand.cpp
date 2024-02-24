#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    // TODO: Implement the solution
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    vector<int> b;
    vector<int> c;
    c.push_back(a[n-1]);
    for(int i=0;i<n-1;i++){
        if(a[i] == c[0]){
            c.push_back(a[i]);
        }else{
            b.push_back(a[i]);
        }
    }
    if(b.size() == 0){
        cout << -1 << endl;
        return;
    }
    cout << b.size() << " " << c.size() << endl;
    for(int i=0;i<b.size();i++){
        cout << b[i] << " ";
    }
    cout << endl;
    for(int i=0;i<c.size();i++){
        cout << c[i] << " ";
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}