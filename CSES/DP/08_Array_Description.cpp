#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;


int solve(int ind,int n,int max,bool change,vector<int> &arr){
    // base case
    if(ind == n)return 1;
    int ans = 0;
    if(arr[ind] == 0){
        if(ind == 0){
            for(int i=1;i<=max;i++){
                arr[ind] = i;
                ans = (ans+solve(ind+1,n,max,true,arr))%mod;
                arr[ind] = 0;
            }
        }else{
            for(int i=-1;i<=1;i++){
                if(arr[ind-1]+i <= max && arr[ind-1]+i > 0){
                    arr[ind] = arr[ind-1]+i;
                    ans = (ans+solve(ind+1,n,max,true,arr))%mod;
                    arr[ind] = 0;
                }
            }
        }
    }else{
        if(ind == 0){
             ans = (ans+solve(ind+1,n,max,false,arr))%mod;
        }
        else if(abs(arr[ind]-arr[ind-1]) <= 1){
             ans = (ans+solve(ind+1,n,max,false,arr))%mod;
        }else{
            return 0;
        }
    }
    return ans%mod;
}

void solve(){
    int n,m;
    cin >> n >> m;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << solve(0,n,m,false,arr);
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}