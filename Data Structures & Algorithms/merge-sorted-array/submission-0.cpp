class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int i = m - 1;       // nums1 ke last valid element ka index
        int j = n - 1;       // nums2 ke last element ka index
        int k = m + n - 1;   // nums1 ki last position

        while (i >= 0 && j >= 0) {

            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            }
            else {
                nums1[k] = nums2[j];
                j--;
            }

            k--;
        }

        // Agar nums2 me elements bach gaye ho
        while (j >= 0) {
            nums1[k] = nums2[j];
            j--;
            k--;
        }
    }
};