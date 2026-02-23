#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // 宣告一個 Hash Map，用來儲存 <數字, 索引>
        unordered_map<int, int> seen; 
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i]; // 計算差值
            
            // 檢查差值是否已經在 map 中
            if (seen.find(complement) != seen.end()) {
                // 如果找到了，回傳 {差值的索引, 當前的索引}
                return {seen[complement], i}; 
            }
            
            // 如果沒找到，把當前的數字跟索引存進 map，供後續查找
            seen[nums[i]] = i;
        }
        
        return {}; // 為了符合函數回傳型態，加上空的回傳
    }
};

int main() {
    Solution sol;
    int n;
    int caseNum = 1;

    // 當成功讀取到陣列長度 n 時，進入迴圈。遇到 EOF 會自動跳出。
    while (cin >> n) {
        // 1. 讀取 nums 陣列
        vector<int> nums(n); // 直接宣告大小為 n 的陣列
        for (int i = 0; i < n; ++i) {
            cin >> nums[i];
        }

        // 2. 讀取 target
        int target;
        cin >> target;

        // --- 格式化印出 ---
        cout << "Example " << caseNum++ << ":" << endl;
        
        cout << "Input: nums = [";
        for (int j = 0; j < nums.size(); ++j) {
            cout << nums[j] << (j == nums.size() - 1 ? "" : ",");
        }
        cout << "], target = " << target << endl;

        // --- 執行我們的演算法 ---
        vector<int> result = sol.twoSum(nums, target);

        // --- 印出 Output 與 Explanation ---
        if (result.size() == 2) {
            cout << "Output: [" << result[0] << "," << result[1] << "]" << endl;
        } else {
            cout << "Output: [] (No solution found)" << endl;
        }
    }

    return 0;
}