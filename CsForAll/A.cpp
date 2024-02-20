#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve(){
    int n;
    cin >> n;
    if(n == 1){
        cout << 1;
        return;
    }
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int left = 0;
    int right = 1;
    while(right < n){
        if(arr[left] == -1)left++;
        if(left == right)right++;
        else if(arr[left] < arr[right]){
            arr[left] = -1;
            arr[right] = -1;
            left++;
            right++;
        }else{
            right++;
        }
    }
    int count = 0;
    for(auto x:arr){
        if(x == -1)count++;
    }
    cout << n-count;
}

// 1 2 3 3 4 5
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}