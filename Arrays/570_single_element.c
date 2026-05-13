int singleNonDuplicate(int* nums, int numsSize) {
       
    int n = numsSize;

    if (n == 1) return nums[0];

    int st = 0, end = n-1;

    while (st <= end) {
        int mid = st + (end - st) /2;

        if (mid == 0 && nums[0] != nums[1]) {
            return nums[mid];
        }
        if (mid == n-1 && nums[n-1] != nums[n-2]) {
            return nums[mid];
        }
        if (nums[mid-1] != nums[mid] && nums[mid+1] != nums[mid]) {
            return nums[mid];
        }

        if (mid % 2 == 0) { // the array is even
            if (nums[mid] == nums[mid-1]) {
                end = mid - 1; // right check
            } else {
                st = mid + 1; // left check
            }
        } else { // the array in odd
            if (nums[mid] == nums[mid-1]) {
                st = mid + 1; // right check
            } else {
                end = mid - 1; // left check
            }
        }
    }
return -1;
}