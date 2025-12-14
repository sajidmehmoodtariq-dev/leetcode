#include <iostream>
#include <vector>

using namespace std;

int singleNumber(vector<int> &nums)
{
    int answer = 0;
    for (int val : nums)
    {
        answer ^= val;
    }
    return answer;
}

int main()
{
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << "Single Number: " << singleNumber(nums) << endl;
    
    return 0;
}