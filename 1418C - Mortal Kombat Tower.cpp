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
    int ans = nums[0];
    for(int i = 1; i < n; i++)
    {
        if(nums[i] == 0)
        {
            continue;
        }
        else
        {
            int j = i;
            int count = 0;
            while(j < n && nums[j] == 1)
            {
                j++;
            }
            count += j - i;
            ans += count/3;
            i = j-1;
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
