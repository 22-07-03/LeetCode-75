class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        ios_base:: sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        int currentsum = 0;
        
        // Calculate the sum of the first 'k' elements
        for (int i = 0; i < k; i++) {
            currentsum += nums[i];
        }
        
        int maxsum = currentsum;  // Initialize maxsum with the sum of the first 'k' elements
        
        // Slide the window over the array
        for (int i = k; i < nums.size(); i++) {
            currentsum = currentsum - nums[i - k] + nums[i];
            maxsum = max(maxsum, currentsum);
        }
        
        double maxavg = (double)maxsum / k;
        return maxavg;
    }
};
