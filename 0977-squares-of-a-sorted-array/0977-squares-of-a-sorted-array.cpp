class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        int square;
        for(int i =0;i<n;i++){
            square = nums[i] * nums[i];
            result.push_back(square);
            square = 0;
        }
        sort(result.begin(),result.end());
        return result;
    }
};