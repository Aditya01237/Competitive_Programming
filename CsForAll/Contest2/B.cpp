#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

bool rec(int ind,ll sum,vector<ll>&arr,int n){
    if(ind >= n){
        if(sum%180 == 0){
            return true;
        }else{
            return false;
        }
    }
    ll add = rec(ind+1,sum+arr[ind],arr,n);
    ll sub = rec(ind+1,sum-arr[ind],arr,n);
    return add || sub;
}

void solve(){
    int n;
    cin >> n;
    vector<ll> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    (rec(0,0,arr,n) == true) ? cout << "YES" : cout << "NO";
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}