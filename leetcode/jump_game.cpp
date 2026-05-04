#include <vector>
using namespace std;

bool canJump(vector<int>& nums) {
    int max = 0, maxlocal = 0;
    int i = 0;
    while(i<nums.size() && i <= max){
        maxlocal = i + nums[i];
        if(maxlocal> max) max = maxlocal;
        i++;
    }
    if(i>= nums.size()){
        return true;
    }
    return false;
            
}
int main(){

}