#include <bits/stdc++.h>
using namespace std;

void mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n){
    int i=m-1;
    int j=n-1;
    int k=m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k--]=nums1[i--];
        }else{
            nums1[k--]=nums2[j--];
        }
    }

    while(j>=0){
        nums1[k--]=nums2[j--];
    }
}

int main(){
    vector<int> nums1 = {1,2,3,0,0,0};
    int m = 3;
    vector<int> nums2 = {2,5,6};
    int n = 3;

    mergeSortedArray(nums1, m, nums2, n);

    for(int num : nums1){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

/*
Input:
nums1 = [1,2,3,0,0,0], m = 3
nums2 = [2,5,6], n = 3

Dry Run :

Step 1: Initialize pointers
i = m - 1 = 2 (points to 3 in nums1)
j = n - 1 = 2 (points to 6 in nums2)
k = m + n - 1 = 5 (points to the last position in nums1)
Step 2: Compare and merge
- Compare nums1[i] (3) and nums2[j] (6)
- Since 6 > 3, place 6 at nums1[k] and decrement j and k
nums1 = [1,2,3,0,0,6]
j = 1, k = 4
- Compare nums1[i] (3) and nums2[j] (5)
- Since 5 > 3, place 5 at nums1[k] and decrement j
nums1 = [1,2,3,0,5,6]
j = 0, k = 3
- Compare nums1[i] (3) and nums2[j] (2)
- Since 3 > 2, place 3 at nums1[k] and decrement i
nums1 = [1,2,3,3,5,6]
i = 1, k = 2
- Compare nums1[i] (2) and nums2[j] (2)
- Since 2 <= 2, place 2 at nums1[k] and decrement j
nums1 = [1,2,2,3,5,6]
j = -1, k = 1
Step 3: Copy remaining elements from nums2 (if any)
- Since j < 0, no elements left in nums2 to copy.
*/