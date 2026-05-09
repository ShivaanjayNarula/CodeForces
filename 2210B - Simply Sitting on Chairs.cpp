#include <iostream>
#include <vector>

using namespace std;

void helper()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        if(i+1>= nums[i])
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        helper();
    }
    return 0;
}
