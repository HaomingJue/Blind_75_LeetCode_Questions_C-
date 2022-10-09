#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> umap;
        for (int i = 0; i < nums.size(); i++) {
            umap[nums[i]]++;
        }

        for ( const auto &[key, value]: umap ) {
            if (value >= 2) {
                return true;
            }
        }
        return false;
    }
};