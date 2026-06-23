class Solution {
public:
         int maxArea(vector<int>& height) {
    int ans = 0;

    for(int i = 0; i < height.size(); i++) {
        for(int j = i + 1; j < height.size(); j++) {

            int width = j - i;
            int h = min(height[i], height[j]);

            ans = max(ans, width * h);
        }
    }

    return ans;
}
   
};
