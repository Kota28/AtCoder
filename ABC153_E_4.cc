#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 1e9 + 7;
ll h,n;
ll a[10001],b[10001];
ll dp[10001];
int main()
{
    cin >> h >> n;
    for(int i = 1;i <= n;i ++)
        cin >> a[i] >> b[i];
    memset(dp,N,sizeof dp);
    dp[0] = 0;
    for(int i = 0;i <= n;i ++)
    {
        for(int j = 0;j <= h;j ++)
        {
            if(j + a[i] >= h) dp[h] = min(dp[h],dp[j] + b[i]);
            else dp[j + a[i]] = min(dp[j + a[i]],dp[j] + b[i]);
        }
    }
    cout << dp[h] ;
    return 0;
}
