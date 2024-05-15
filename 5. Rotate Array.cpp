class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int l = nums.size();
        vector<int> rota(l);
        for (int i = 0; i < l; i++) 
            rota[(i + k) % l] = nums[i];
        
        for (int i = 0; i < l; i++)
            nums[i] = rota[i];
    }
};