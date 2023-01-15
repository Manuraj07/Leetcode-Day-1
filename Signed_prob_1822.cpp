class Solution {
public:
    int arraySign(vector<int>& nums) {
        int Ans = 1;
        for(int num : nums){
            if(num == 0)
                return 0;
            else if(num < 0)
                Ans *= -1;
        }
        return Ans;
    }
};
