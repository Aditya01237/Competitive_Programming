#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

string giveLetters(char c){
    switch(c) {
        case '2':
            return "abc";
            break;
        case '3':
            return "def";
            break;
        case '4':
            return "ghi";
            break;
        case '5':
            return "jkl";
            break;
        case '6':
            return "mno";
            break;
        case '7':
            return "pqrs";
            break;
        case '8':
            return "tuv";
            break;
        case '9':
            return "wxyz";
            break;
        }
    return "";
}

void solve(int ind ,string comb, vector<string> &ans,vector<string> str){
    //base case
    if(ind == str.size()){
        ans.push_back(comb);
        return;
    }
    //main code
    for(int i=0;i<str[ind].size();i++){
        comb += str[ind][i];
        solve(ind+1,comb,ans,str);
        comb.erase(comb.size() - 1);
    }
}

void solve(){
    string s;
    cin >> s;
    int n = s.size();
    if(n == 0){
        cout << " ";
        return;
    }
    vector<string> ans;
    vector<string> str;
    for(auto c:s){
        str.push_back(giveLetters(c));
    };
    string comb = "";
    solve(0,comb,ans,str);
    sort(ans.begin(),ans.end());
    for(auto &x:ans){
        cout << x << " ";
    }
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}