
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9 + 7;
const int INF = 1e9;
 
multiset<int> s1;
multiset<int> s2;
 
void removeLast(int value) {
    if(s1.find(value) != s1.end()){
        auto it = s1.find(value);
        s1.erase(it);
    }else{
        auto it = s2.find(value);
        s2.erase(it);
    }
}
 
void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    vector<ll> median;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < k; i++) {
        s1.insert(arr[i]);
    }
    for (int i = 0; i < k / 2; i++) {
        auto it = s1.rbegin();
        s2.insert(*it);
        s1.erase(prev(it.base()));
    }
    median.push_back(*s1.rbegin());
    for (int i = k; i < n; i++) {
        removeLast(arr[i - k]);
        if (s1.size() == s2.size()) {
            s2.insert(arr[i]);
            auto it = s2.begin();
            s1.insert(*it);
            s2.erase(it);
        } else if(s1.size() > s2.size()) {
            s1.insert(arr[i]);
            auto it = s1.rbegin();
            s2.insert(*it);
            s1.erase(prev(it.base()));
        } else {
            s2.insert(arr[i]);
            auto it = s2.begin();
            s1.insert(*it);
            s2.erase(it);
        }
        median.push_back(*s1.rbegin());
    }
    int left = 0;
    int right = 0;
    ll curr = 0;
    while(right < n){
        curr += abs(arr[right]-median[left]);
        if(right-left+1 == k){
            cout << curr << " ";
            left++;
            right = left;
            curr = 0;
        }else{
            right++;
        }
    }}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
