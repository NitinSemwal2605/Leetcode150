#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int>& nums, int val) {
    int n = 0;

    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != val) {
            nums[n] = nums[i];
            n++;
        }
    }

    return n;
}

int main() {
    vector<int> nums = {3, 2, 2, 3};
    int val = 3;

    int newLength = removeElement(nums, val);

    cout << "New length: " << newLength << endl;
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}

/*
Dry Run:
Input: nums = [3, 2, 2, 3], val = 3
Output: New length = 2, Modified array = [2, 2]

Step 01 : Initialize n = 0
Step 02 : Iterate through the array:
    - i = 0: nums[0] = 3 (equals val), skip
    - i = 1: nums[1] = 2 (not equal to val), nums[0] = 2, n = 1
    - i = 2: nums[2] = 2 (not equal to val), nums[1] = 2, n = 2
    - i = 3: nums[3] = 3 (equals val), skip
Step 03 : Return n = 2
*/