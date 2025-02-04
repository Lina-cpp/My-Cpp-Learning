#include <iostream>
#include <vector>

using namespace std;

//brute force to find it
vector<int> SumOfTwo(vector<int> nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[i] + nums[j] == target) //sums numebers and check if they match target
                {
                    return {i, j};  //num found
                }
            }
        }
    }

int main()
{
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = SumOfTwo(nums, target); // call function

    cout << "[" << result[0] << ", " << result[1] << "]" << endl;

    

    

    
    return 0;
}
