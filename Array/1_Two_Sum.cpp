#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int ,int> umap;
        for (int i = 0; i < nums.size(); i++) {
            if (umap.count(target - nums[i]) > 0) {
                ans.push_back(i);
                ans.push_back(umap[target - nums[i]]);
                return ans;
            }
            else {
                umap[nums[i]] = i;
            }
        }
        return ans;
    }
};


int main() {

    vector<int> ans = {1, 2, 3, 4, 10};
    int target = 11;

    Solution solution;
    vector<int> result = solution.twoSum(ans, target);
    cout << result[0] << " " << result[1] << endl;
    result.pop_back();
    return 0;
}