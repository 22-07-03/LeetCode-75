#pragma GCC optimize("03")
class Solution {
public:
    int maxArea(vector<int>& height) {
        ios_base:: sync_with_stdio(0), cin.tie(0), cout.tie(0);
       int maxarea =0; int currarea =0;
       int n = height.size();
       int start = height[0]; int sindex =0; int last = height[n-1]; int lindex = n-1;
        
       while(sindex<lindex){ 
             currarea = min(start,last)*(lindex-sindex);
             maxarea = max(maxarea,currarea);

             if(start<last){sindex++ ; start = height[sindex];}
             else{
                lindex--; last = height[lindex];
             }             
              
       }

             return maxarea;
    }
};
