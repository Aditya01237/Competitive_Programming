#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve() { 
    int n; 
    cin>>n;
    vector<int> arr(n); 
    for(int i=0; i<n; i++){
        cin >> arr[i]; 
    }
 
    unordered_map<int, int> mp; 
    for(int i=0; i<n; i++) { 
        mp[arr[i]]++; 
    } 
    int count = 0; 
    for(auto &x: mp) { 
        if(x.second > 1){
            count++; 
        }
    } 
    if(count > 1) {
        vector<int> temp; 
        for(auto &x: mp) { 
            if(x.second > 1) { 
                temp.push_back(x.first); 
                if(temp.size()==2)break; 
            } 
        } 
        int first = temp[0];
        int second = temp[1]; 
        unordered_map<int,int> ans; 
        ans[first] = 1;
        ans[second] = 2;
        for(int i=0; i<n; i++) {
            if(arr[i] == second) { 
                cout << ans[second] << " "; 
                ans[second] = 5 - ans[second]; 
            } else if(arr[i]==first) { 
                cout << ans[first] << " "; 
                ans[first] = 3 - ans[first]; 
            } else { 
                cout<< 1 << " "; 
            } 
        } 
        cout<<endl; 
    } 
    else { 
         cout<<-1<<endl;
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