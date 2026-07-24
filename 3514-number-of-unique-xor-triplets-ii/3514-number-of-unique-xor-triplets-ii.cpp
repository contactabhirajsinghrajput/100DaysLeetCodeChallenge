class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        const int MAXX = 2048; 

        vector<bool> one(MAXX, false);
        vector<bool> two(MAXX, false);
        vector<bool> three(MAXX, false);

        // XOR of one element
        for (int x : nums)
            one[x] = true;

        // XOR of two elements
        for (int i = 0; i < MAXX; i++) {
            if (!one[i]) continue;
            for (int x : nums)
                two[i ^ x] = true;
        }

        // XOR of three elements
        for (int i = 0; i < MAXX; i++) {
            if (!two[i]) continue;
            for (int x : nums)
                three[i ^ x] = true;
        }

        int ans = 0;
        for (bool x : three)
            ans += x;

        return ans;
    }
};