#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    srand(time(NULL));
    vector<int> nums;
    for (int i = 0; i < 6; i++)
    {
        int num = rand() % 45 + 1;
        while (find(nums.begin(), nums.end(), num) != nums.end())
        {
            num = rand() % 45 + 1;
        }
        nums.push_back(num);
    }
    
    int n = nums.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (nums[j] > nums[j+1])
            {
                swap(nums[j], nums[j+1]);
            }
        }
    }
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}