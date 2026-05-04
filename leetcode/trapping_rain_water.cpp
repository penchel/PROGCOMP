#include <vector>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        // state 1: searching first wall
        // state 0: searching second wall
        bool state = 1;
        int sum = 0;
        int last_wall = 0;
        for (size_t i = 0; i < height.size(); i++)
        {
            if(state){
                if(height[i] > 0) state  = 0;
            }
            else{
                if(height[i] >= last_wall);
            }
        }
        
    }
};