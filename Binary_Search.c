#include <stdio.h>

// Iterative Binary Search implementation
int binarySearchIterative(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Prevents potential arithmetic overflow
        int mid = low + (high - low) / 2; 

        if (arr[mid] == target) {
            return mid; // Target found, return its index
        } else if (arr[mid] < target) {
            low = mid + 1; // Search the right half
        } else {
            high = mid - 1; // Search the left half
        }
    }
    return -1; // Target not found
}

// Recursive Binary Search implementation
int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) {
        return -1; // Base case: Target not found
    }

    // Prevents potential arithmetic overflow
    int mid = low + (high - low) / 2; 

    if (arr[mid] == target) {
        return mid; // Target found, return its index
    } else if (arr[mid] < target) {
        return binarySearchRecursive(arr, mid + 1, high, target); // Search the right half
    } else {
        return binarySearchRecursive(arr, low, mid - 1, target); // Search the left half
    }
}

int main() {
    // Binary search requires a SORTED array
    int sortedArray[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(sortedArray) / sizeof(sortedArray[0]);
    
    // Define search targets
    int targetFound = 23;
    
    printf("--- Binary Search Test ---\n");
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", sortedArray[i]);
    }
    printf("\n\n");

    // 1. Test Iterative Approach
    printf("[Iterative Approach]\n");
    int idxIterative1 = binarySearchIterative(sortedArray, size, targetFound);
    
    if (idxIterative1 != -1) {
        printf("  Found %d at index: %d\n", targetFound, idxIterative1);
    } else {
        printf("  %d not found\n", targetFound);
    }

    printf("\n");

    // 2. Test Recursive Approach
    printf("[Recursive Approach]\n");
    int idxRecursive1 = binarySearchRecursive(sortedArray, 0, size - 1, targetFound);
    
    if (idxRecursive1 != -1) {
        printf("  Found %d at index: %d\n", targetFound, idxRecursive1);
    } else {
        printf("  %d not found\n", targetFound);
    }

    return 0;
}
