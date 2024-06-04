class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        ios_base:: sync_with_stdio(0),cin.tie(0), cout.tie(0);
        int n = gain.size();
        vector<int>altitude(n+1,0);
           altitude[0] =0;

        for(int i =1;i<=gain.size();i++){
            altitude[i] = altitude[i-1]+gain[i-1];
        }

        auto ans = max_element(altitude.begin(), altitude.end());

        return *ans;
        
    }
};
