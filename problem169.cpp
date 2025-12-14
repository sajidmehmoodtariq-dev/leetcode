#include <iostream>
#include <vector>

using namespace std;

int majorityElement(vector<int> &nums)
{
    int greatest = 0;
    int newCount = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        int count = 0;
        for (int j = i; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
                count++;
        }
        if (newCount < count)
        {
            newCount = count;
            greatest = i;
        }
        if (newCount > nums.size() / 2)
            break;
    }
    return nums[greatest];
}

int main()
{
    vector<int> nums1 = {3, 2, 3};
    cout << "Majority element: " << majorityElement(nums1) << endl;

    vector<int> nums2 = {2, 2, 1, 1, 1, 2, 2};
    cout << "Majority element: " << majorityElement(nums2) << endl;

    return 0;
}