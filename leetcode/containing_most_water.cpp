#include <vector>
using namespace std;
class Solution {
public:
    int minHeight(int a, int b){
        if (a>b) return b;
        else return a;
    }
    int maxArea(vector<int>& height) {
        int max_value = 0;
        int max_area = 0;
        int area = 0;
        for(int i = height.size() - 1; i > 0; i--){
            int pivot_1 = 0;
            int pivot_2 = i;
            do{
                area = i * minHeight(pivot_1, pivot_2);
                if(area > max_area)  max_area = area;
                pivot_1++;
                pivot_2++;
            }while(pivot_2<height.size());
        }

        return max_area;
    }
};