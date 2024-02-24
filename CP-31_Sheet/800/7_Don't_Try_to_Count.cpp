#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return 1;
    return 0;
}

void solve(){
    int n,m;
    cin >> n >> m;
    string a,b;
    cin >> a >> b;
    int count = 0;
    if(isSubstring(b,a) == 0){
        count++;
        a += a;
    }
    while(true){
        if(isSubstring(b,a)){
            break;
        }
        else if(a.size() >= 2*(b.size())){
            cout << -1 << endl;
            return;
        }
        else{
            count++;
            a += a;
        }
    }
    cout << count << endl;
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