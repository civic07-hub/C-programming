#include <stdio.h>

int main() {
    int arr[100], n, i;
    int product = 1;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        product = product * arr[i];
    }

    printf("Product of array elements = %d", product);

    return 0;
}
