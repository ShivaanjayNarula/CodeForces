#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string getMin(int num, int size)
{
    if(num == 0 && size == 1)
    {
        return "0";
    }
    if(num == 0)
    {
        return "-1";
    }
    string ans;
    for(int i = 0; i < size; i++)
    {
        if(i == size-1)
        {
            ans.insert(ans.begin(), (min(9, num) + '0'));
            num -= min(9, num);
        }
        else
        {
            ans.insert(ans.begin(), (min(9, num-1) + '0'));
            num -= min(9, num-1);
        }
    }
    if(num > 0)
    {
        return "-1";
    }
    return ans;
}

string getMax(int num, int size)
{
    if(num == 0 && size == 1)
    {
        return "0";
    }
    if(num == 0)
    {
        return "-1";
    }
    string ans;
    for(int i = 0; i < size; i++)
    {
        ans.push_back(min(9, num) + '0');
        num -= min(9, num);
    }
    if(num > 0)
    {
        return "-1";
    }
    return ans;
}

int main()
{
    int num;
    int size;
    cin >> size;
    cin >> num;
    cout << getMin(num, size) << " " << getMax(num, size);
    return 0;
}
