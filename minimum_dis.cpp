#include <iostream>
#include <unordered_map>
#include <vector>
class Solution {
public:
    
    int abs(int x, int y){
        int d = x - y;
        if (d<0) return -1*d;

        return d;
    }

    std::vector<int> smallestD(std::vector<int> array){
        int smallest = 0, dis = 0;
        std::vector<int> retorno;
        for(int i = 0, i <array.size(); i++){
            for(int j = 0; j < array.size(); j++){
                if(j != i){
                    for(int h = 0; h < array.size(); h++){
                        if(h != i || h != j){
                dis = abs(array[i], array[h]) + abs(array[i], array[j]) + abs(array[j], array[h]);
                            if (smallest = 0){
                                smallest = dis;
                                
                            }
                            if(smalest> dis){
                                smallest = dis
                            }
                        }
                    }
                }
            }
        }
    }


    int minimumDistance(vector<int>& nums) {
        std::unordered_map<int, std::vector<int>> hashtable;
        std::vector<int> valores;
        std::vector<std::vector<int>> good_tuples;
        int aux = 0;
        for(int i = 0; i < nums.size(); i++){
            hashtable[nums[i]].push_back(i);
            if (hashtable[nums[i]].size() == 3){
                good_tuples.push_back(hashtable[nums[i]]);
            }
        }
        if(good_tuples.size() == 0) return -1;
        int dis = 0, largest = 0;
        for(int i = 0; i < good_tuples.size(); i++){
            dis = abs(good_tuples[i][0], good_tuples[i][1]) + abs(good_tuples[i][0], good_tuples[i][2]) + abs(good_tuples[i][2], good_tuples[i][1]);
            if (largest == 0){
                largest = dis;
            }
            if(dis < largest){
                largest = dis;
            }
        }
        return largest;
    }
};