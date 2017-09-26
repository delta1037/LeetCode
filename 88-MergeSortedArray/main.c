#include <stdio.h>

void merge(int* nums1, int m, int* nums2, int n) {
    if (m == 0 || n == 0) {
        return;
    }

    int t = m + n - 1;
    n = n - 1;
    m = m - 1;

    while (n >= 0 && m >= 0) {
        if (nums1[m] > nums2[n]) {
            nums1[t] = nums1[m];
            m--;
            t--;
        } else {
            nums1[t] = nums2[n];
            n--;
            t--;
        }
    }

    if (t >= 0) {
        if (m >= 0) {
            while (m >= 0) {
                nums1[t] = nums1[m];
                m--;
                t--;
            }
        }

        if (n >= 0) {
            while (n >= 0) {
                nums1[t] = nums2[n];
                n--;
                t--;
            }
        }

    }
}
int main() {
    printf("Hello, World!\n");
    return 0;
}