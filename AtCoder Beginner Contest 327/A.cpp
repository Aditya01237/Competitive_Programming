#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s.find("ab") != std::string::npos){
      cout << "Yes";
    }else if(s.find("ba") != std::string::npos){
        cout << "Yes";
    }else{
      cout << "No";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}