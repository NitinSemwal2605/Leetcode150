#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }

    for(auto &num : mpp){
        if(num.second > n/2){
            return num.first;
        }
    }
    
    return -1;
}

int main(){
    vector<int>nums={3,2,3};
    int ans=majorityElement(nums);
    cout<<ans<<endl;
    return 0;
}