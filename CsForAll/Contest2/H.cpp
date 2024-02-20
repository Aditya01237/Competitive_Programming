#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

bool isPalindrome(string s, int start,int end){
    while(start <= end){
        if(s[start++] != s[end--])return false;
    }
    return true;
}
void solve(int ind,string s,vector<string> &arr,vector<vector<string>> &ans){
    if(ind == s.length()){
        ans.push_back(arr);
        return;
    }
    for(int i=ind;i<s.length();i++){
        if(isPalindrome(s,ind,i)){
            arr.push_back(s.substr(ind,i-ind+1));
            solve(i+1,s,arr,ans);
            arr.pop_back();
        }
    }
}

void solve(){
    string s;
    cin >> s;
    vector<vector<string>> ans;
    vector<string> path;
    solve(0,s,path,ans);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}