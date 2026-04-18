#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[14] = {2, 4, 6, 8, 12, 20, 25, 40, 45, 90, 108, 120, 140, 150};
    int l = 0;
    int r = 13;  // Could use sizeof(arr)/sizeof(arr[0]) - 1 for flexibility
    int target = 108;
    int found = 0;  // Flag to track if target is found

    while (l <= r) {
        int mid = (l + r) / 2;
        if (arr[mid] == target) {
            printf("Target found\n");
            found = 1;
            break;
        } else if (arr[mid] > target) {
            r = mid - 1;
        } else {  // Fixed: This should be the case when arr[mid] < target
            l = mid + 1;  
        }
    }

    if (!found) {
        printf("Target not found\n");
    }

    return 0;
}
