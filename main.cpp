#include <iostream>

int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
int n = sizeof(arr)/sizeof(arr[0]);
int low = 0;
int high = n-1;

int BinarySearch(int arr[], int low, int high, int target) {
     int mid = (low + high) / 2;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int target;
    
    std::cout << "Enter Number: ";
    scanf("%d", &target);
    
    // Binary Search
    int bResult = BinarySearch(arr, low, high, target);
    std::cout << "Binary Search Result Index: " << bResult;
    
    return 0;
}