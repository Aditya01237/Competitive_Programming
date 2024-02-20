#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int mod = 1e9+7;
const int INF = 1e9;

void solve()
{
    int n;
    cin>>n;
    map<pair<int,int>,int> mp;
    vector<string> arr(n);
    string s;
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
        s = arr[i];
        int sum=0;
        for(auto &x:s){
            sum += x-'0';
        }
        int p = (s.length())%2;
        mp[{sum,p}]++;
    }
   
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int p = (arr[i].size())%2;
        int sum = 0;
        for(auto it:arr[i])
            sum+=(it-'0');
        ans += mp[{sum,p}];
        int size=arr[i].size();
        if(p==1)
        {
            for(int j=1;j<size;j+=2)
            {
                int len=(size+j)/2;
                int temp=0;
                for(int k=0;k<len;k++)
                    temp+=(arr[i][k]-'0');

                int find=abs(sum-2*temp);
                int parity=j%2;
                ans+=mp[{find,parity}];
                temp=0;
                for(int k=0;k<len;k++)
                    temp+=(arr[i][size-k-1]-'0');
                find=abs(sum-2*temp);
                ans+=mp[{find,parity}];
            }
        }
        else
        {
            for(int j=2;j<size;j+=2)
            {
                int len=(size+j)/2;
                int temp=0;
                for(int k=0;k<len;k++)
                    temp+=(arr[i][k]-'0');
                int find=abs(sum-2*temp);
                int parity=j%2;
                ans+=mp[{find,parity}];
                temp=0;
                for(int k=0;k<len;k++)
                     temp+=(arr[i][size-k-1]-'0');
                find=abs(sum-2*temp);
                ans+=mp[{find,parity}];
            }
        }


    }
    cout<<ans<<endl;

}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}