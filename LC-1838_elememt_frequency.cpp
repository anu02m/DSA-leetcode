// 1838. Frequency of the Most Frequent Element
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int start = 0, maxfreq = 0;
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum+= nums[i];
            long long x = (nums[i] * (long long)(i - start + 1)) - sum;
            if(x <= k) {
                maxfreq = i - start + 1;
            }else{
                sum-=nums[start++];
            }
        }
        return maxfreq;
    }
};