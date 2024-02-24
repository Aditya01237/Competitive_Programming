#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;
 
int main() {
    int t;
    cin >> t;
    while(t--){
        ll ans = 0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char ch;
                cin >> ch;
                if(ch == 'X'){
                    if((i == 0 || i == 9) && (j >= 0 && j <= 9) || (j == 0 || j == 9) && (i >= 0 && i <= 9)){
                        ans += 1;
                    }
                    else if((i == 1 || i == 8) && (j >= 1 && j <= 8) || (j == 1 || j == 8) && (i >= 1 && i <= 8)){
                        ans += 2;
                    }
                    else if((i == 2 || i == 7) && (j >= 2 && j <= 7) || (j == 2 || j == 7) && (i >= 2 && i <= 7)){
                        ans += 3;
                    }
                    else if((i == 3 || i == 6) && (j >= 3 && j <= 6) || (j == 3 || j == 6) && (i >= 3 && i <= 6)){
                        ans += 4;
                    }
                    else{
                        ans += 5;
                    }
                }
            }
        }
        cout << ans << endl;
    }
}