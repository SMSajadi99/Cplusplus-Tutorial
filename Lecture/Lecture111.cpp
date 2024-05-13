#include <iostream>
#include <vector>

using namespace std;

int binarySearch(vector<int>& nums, int target) {
    int left = 0;
    int right = nums.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    
    return -1; // Not found
}

int main() {
    int n;
    cin >> n;
    
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    
    int m;
    cin >> m;
    
    int index = binarySearch(nums, m);
    
    if (index != -1)
        cout << index << endl;
    else
        cout << -1 << endl;
    
    return 0;
}
