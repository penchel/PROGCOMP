#include <vector>
using namespace std;
bool canPlaceFlowers(vector<int>& flowerbed, int n) {
    if(flowerbed.size() == 1){
        if(flowerbed[0] == 1) return false;
        else if( n <= 1) return true;
        else return false;
    }
    if(flowerbed[0] == 0 && flowerbed[1] == 0){
        flowerbed[0] = 1;
        n--;
    }
    int i = 2;
    while ( i < flowerbed.size()-1 && n>0)
    {
        if(flowerbed[i] == 0 && flowerbed[i+1] == 0 && flowerbed[i-1] == 0){
            flowerbed[i] = 1;
            n--;
        }
        i++;
    }

    if(flowerbed[flowerbed.size()-1] == 0 && flowerbed[flowerbed.size()-2] == 0){
        flowerbed[flowerbed.size()-1] = 1;
        n--;
    }
    if(n>0) return false;
    return true;
    
}

int main(){

    return 0;
}