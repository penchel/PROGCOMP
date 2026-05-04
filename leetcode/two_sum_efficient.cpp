#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        unordered_map<int, int> hash;
        int i = 0;
        while(hash.count(target - nums[i]) == 0){
            hash[nums[i]] = i;
            i++;
        }
        res = {hash[target - nums[i]], i};
        return res;
    }
};