class Solution {
public:
//Bruteforce
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(i!=j){
                    if(nums[j]==target-nums[i]){
                        vector <int> a={i,j};
                        return a;
                    }
                }
            }
        }
    vector <int>a;
    return a;

    }
};

//#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numMap;  // To store the number and its index
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (numMap.find(complement) != numMap.end()) {
                // If the complement exists in the map, we have found the solution
                return {numMap[complement], i};
            }
            // Store the number and its index in the map
            numMap[nums[i]] = i;
        }
        return {};  // In case no solution is found
    }
};
