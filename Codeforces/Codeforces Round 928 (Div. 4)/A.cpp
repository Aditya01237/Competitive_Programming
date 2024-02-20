#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int count = 0;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'A'){
            count++;
        }else{
            count--;
        }
    }
    if(count > 0){
        cout << 'A' << endl;
    }else{
        cout << 'B' << endl;
    }
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