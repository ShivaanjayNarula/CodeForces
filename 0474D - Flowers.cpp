#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    int k;
    cin >> t;
    cin >> k;
    const int mod = 1e9 + 7;
    const int n = 1e5;
    vector<int> ways(n+1, 0);
    vector<int> pref(n+1, 0);
    for(int i = 0; i < k; i++)
    {
        ways[i] = 1;
    }
    ways[k] = 2;
    for(int i = k+1; i <= n; i++)
    {
        ways[i] = (1LL * ways[i-1] + ways[i-k]) % mod;
    }
    pref[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        pref[i] = (pref[i-1] + ways[i]) % mod;
    }
    vector<int> ans;
    while(t--)
    {
        int a;
        int b;
        cin >> a;
        cin >> b;
        int res = pref[b];
        if(a > 1)
        {
            res -= pref[a-1];
        }
        if(res < 0)
        {
            res += mod;
        }
        ans.push_back(res);
    }
    for(int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << '\n';
    }
    return 0;
}
