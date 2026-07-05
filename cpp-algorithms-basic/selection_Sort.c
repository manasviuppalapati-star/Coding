#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    // VLA (Variable Length Array) declaration: int a[n];
    int a[n]; 
    int temp; 
    int min_idx; // New variable to store the index of the minimum element

    // Input loop
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // --- SELECTION SORT LOGIC ---
    // Outer loop: Iterate through the array to place the correct element at position 'i'
    for (int i = 0; i < n - 1; i++) {
        
        // Assume the current element is the minimum
        min_idx = i;

        // Inner loop: Find the minimum element in the remaining unsorted subarray (from i+1 to n-1)
        for (int j = i + 1; j < n; j++) {
            // Check if the current element (a[j]) is smaller than the current minimum (a[min_idx])
            if (a[j] < a[min_idx]) {
                min_idx = j; // Update the index of the minimum element
            }
        }
        
        // After the inner loop, min_idx holds the index of the true minimum.
        // Swap the minimum element (a[min_idx]) with the current element (a[i]).
        if (min_idx != i) {
            temp = a[i];
            a[i] = a[min_idx];
            a[min_idx] = temp;
        }
    }

    // --- Output loop ---
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        // Using a space for better output readability
        printf("%d ", a[i]); 
    }
    printf("\n");
    
    return 0;
}
