#include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int>&nums){
    if(nums.size()==0) return 0;
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    return i+1;
}

int main(){
    vector<int>nums={0,0,1,1,1,2,2,3,3,4};
    int k=removeDuplicate(nums);
    cout<<k<<endl;
    for(int i=0;i<k;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}

/*
Input: nums = [0,0,1,1,1,2,2,3,3,4]
Output: 5, nums = [0,1,2,3,4]

Step 01 : Initialize two pointers
i=0, j=1

Step 02 : Iterate through the array with j pointer
j=1: nums[i]=0, nums[j]=0 (same, do nothing)
j=2: nums[i]=0, nums[j]=1 (different, increment i and update nums[i])
       i=1, nums=[0,1,1,1,1,2,2,3,3,4]
j=3: nums[i]=1, nums[j]=1 (same, do nothing)
j=4: nums[i]=1, nums[j]=1 (same, do nothing)
j=5: nums[i]=1, nums[j]=2 (different, increment i and update nums[i])
       i=2, nums=[0,1,2,1,1,2,2,3,3,4]
j=6: nums[i]=2, nums[j]=2 (same, do nothing)
j=7: nums[i]=2, nums[j]=3 (different, increment i and update nums[i])
       i=3, nums=[0,1,2,3,1,2,2,3,3,4]
j=8: nums[i]=3, nums[j]=3 (same, do nothing)
j=9: nums[i]=3, nums[j]=4 (different, increment i and update nums[i])
       i=4, nums=[0,1,2,3,4,2,2,3,3,4]
Step 03 : Return the length of the unique elements
Return i+1 = 5
*/