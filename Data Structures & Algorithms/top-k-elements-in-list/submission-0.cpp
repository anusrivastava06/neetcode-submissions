class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> mp;

        // Step 1: Count frequency
        for(int num : nums){
            mp[num]++;
        }

        // Step 2: Store (frequency, element)
        vector<pair<int,int>> freq;

        for(auto it : mp){
            freq.push_back({it.second, it.first});
        }

        // Step 3: Sort according to frequency (largest first)
        sort(freq.begin(), freq.end(), greater<pair<int,int>>());

        // Step 4: Take first k elements
        vector<int> ans;

        for(int i = 0; i < k; i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};