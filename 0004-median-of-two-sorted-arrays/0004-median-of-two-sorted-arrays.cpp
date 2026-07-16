class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int p = 0, q = 0;
        int n = nums1.size();
        int m = nums2.size();

        vector<int> nums3;
        nums3.reserve(n + m);

        // merge both arrays
        while (p < n && q < m) {
            if (nums1[p] <= nums2[q]) {
                nums3.push_back(nums1[p]);
                p++;
            } else {
                nums3.push_back(nums2[q]);
                q++;
            }
        }

        while (p < n) {
            nums3.push_back(nums1[p]);
            p++;
        }

        while (q < m) {
            nums3.push_back(nums2[q]);
            q++;
        }

        int total = nums3.size();

        if (total % 2 == 0) {
            return (nums3[total/2 - 1] + nums3[total/2]) / 2.0;
        } else {
            return nums3[total/2];
        }
    }
};
