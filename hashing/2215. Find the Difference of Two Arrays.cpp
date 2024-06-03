#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
        set<int> set1(nums1.begin(), nums1.end());
        set<int> set2(nums2.begin(), nums2.end());
        
        vector<int> unique1, unique2;

        // Find elements in nums1 not in nums2
        for (const auto& num : set1) {
            if (set2.find(num) == set2.end()) {
                unique1.push_back(num);
            }
        }

        // Find elements in nums2 not in nums1
        for (const auto& num : set2) {
            if (set1.find(num) == set1.end()) {
                unique2.push_back(num);
            }
        }

        return {unique1, unique2};
    }
};
