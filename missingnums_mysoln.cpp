class Solution {
public:
    int partition(vector<int>& nums, int l, int h) {
        int pivot = nums[0];
        int i = l - 1, j = h + 1;
        while (true) {
            do {
                i++;
            } while (nums[i] > pivot);
            do {
                j--;
            } while (nums[j] > pivot);
            if (i >= j) {
                return j;
            }
            swap(nums[i], nums[j]);
        }
    }

    void quickso(vector<int>& nums, int l, int h) {
        if (l < h) {
            int p = partition(nums, l, h);
            quickso(nums, l, p - 1);
            quickso(nums, p + 1, h);
        }
    }

    int missingNumber(vector<int>& nums) {
        int x = nums.size(), a;
        quickso(nums, 0, x - 1);
        for (int i = 0; i < x; i++) {
            if (nums[i] != i) {
                a = i;
                return a;
            }
        }
        return -1;
    }
};
