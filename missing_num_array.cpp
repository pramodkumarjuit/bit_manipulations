#include<iostream>
#include<vector>
using namespace std;

int find_missing_num_array(vector<int> nums) {
    int vSize = nums.size();

    int arrXor = 0;
    for (int i = 0 ; i <= vSize; i++) { // loop including n
        arrXor ^= i;
    }

    for (int num : nums) {
        arrXor ^= num;
    }

    return arrXor;
}

int main(int argc, char* argv[])
{
    std::vector<int> nums = {3, 6, 1, 4, 5, 2, 7, 8, 0};
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    cout << "array size: " << nums.size() << endl;

    cout << "Missing num in array:" << find_missing_num_array(nums) << endl; 
    return 0;
}
