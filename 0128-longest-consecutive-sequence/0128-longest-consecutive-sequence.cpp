class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int i : nums) {
            st.insert(i);
        }
        int maxi = 0;
        for (int x : st) {
            if(st.count(x - 1) == 0) {
                int j = x, count = 1;
                while(st.count(j + 1)) {
                    j++;
                    count++;
                } 
                maxi = max(count, maxi);
            }
        }
        return maxi;
    } 
};