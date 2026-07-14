class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int j = 0;
        int i = numbers.size() - 1;

        while (j < i) {
            int sum = numbers[j] + numbers[i];

            if (sum == target) {
                return {j + 1, i + 1};
            }
            else if (sum < target) {
                j++;
            }
            else {
                i--;
            }
        }

        return {};
    }
};