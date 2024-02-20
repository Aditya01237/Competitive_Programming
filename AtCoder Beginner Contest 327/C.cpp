#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;


bool checkMatrix(vector<vector<int>> &arr){
    for(int i=0;i<9;i+=3){
        for(int j=0;j<9;j+=3){
            set<int> st;
            for(int x=i;x<i+3;x++){
                for(int y=j;y<j+3;y++){
                    if(st.find(arr[x][y]) != st.end()){
                        return false;
                    }else{
                        st.insert(arr[x][y]);
                    }
                }
            }
        }
    }
    return true;
}

bool checkColRow(vector<vector<int>> &arr){
    set<int> st;
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(st.find(arr[i][j]) != st.end()){
                return false;
            }else{
                st.insert(arr[i][j]);
            }
        }
    }
    st.clear();
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(st.find(arr[j][i]) != st.end()){
                return false;
            }else{
                st.insert(arr[j][i]);
            }
        }
    }
    return true;
}

void solve(){
    vector<vector<int>> arr(9,vector<int>(9));
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cin >> arr[i][j];
        }
    }
    if(checkColRow(arr) && checkMatrix(arr)){
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