#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    vector<int> a(n);
    int maxi = INT_MIN;
    for (int i=0;i<n;++i) {
        cin>>a[i];
        maxi = max(maxi,a[i]);
    }
    if(maxi < 0){
        cout << maxi << endl;
        return;
    }
    long long int currentSum = a[0];
    long long int maxSum = a[0];
    for (int i = 1; i < n; ++i) {
        if (((abs(a[i-1])%2==1 && abs(a[i])%2==0) || (abs(a[i-1])%2==0 && abs(a[i])%2==1))) {
            if(currentSum < 0){
                currentSum = 0;
            }
            currentSum+=a[i];
            maxSum=max(maxSum, currentSum);
        } else {
            currentSum=a[i];
            maxSum=max(maxSum, currentSum);
        }
    }
    cout << maxSum << endl;
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