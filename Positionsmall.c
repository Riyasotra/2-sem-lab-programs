// wap to print the position of smallest number of n numbers using arrays
#include <stdio.h>

int main() {
    int n, smallest, position = 0;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int array[n];
    printf("Enter the elements:\n");
    scanf("%d", &array[0]); 
    smallest = array[0];
    for (int i = 1; i < n; i++) {
        scanf("%d", &array[i]);
        if (array[i] < smallest) {
            smallest = array[i];
            position = i;
        }
    }
    
    printf("Position of the smallest number: %d\n", position + 1);
    
    return 0;
}
