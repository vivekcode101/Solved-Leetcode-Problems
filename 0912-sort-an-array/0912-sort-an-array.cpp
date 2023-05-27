#include <vector>

class Solution {
public:
    void heapify(int arr[], int n, int i) {
        int largest = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if (left < n && arr[left] > arr[largest]) {
            largest = left;
        }

        if (right < n && arr[right] > arr[largest]) {
            largest = right;
        }

        if (largest != i) {
            std::swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    std::vector<int> sortheap(int arr[], int n) {
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }

        for (int i = n - 1; i >= 1; i--) {
            std::swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }

        std::vector<int> sortedArr(arr, arr + n);
        return sortedArr;
    }

    std::vector<int> sortArray(std::vector<int>& nums) {
        int n = nums.size();
        int* arr = &nums[0];
        return sortheap(arr, n);
    }
};
