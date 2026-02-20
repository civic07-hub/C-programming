#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int visited[n];   // To mark counted elements

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;   // Initialize visited array
    }

    printf("Duplicate elements are:\n");

    for(i = 0; i < n; i++) {
        if(visited[i] == 1)
            continue;

        int count = 1;

        for(j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
                visited[j] = 1;   // Mark duplicate as visited
            }
        }

        if(count > 1) {
            printf("%d appears %d times\n", arr[i], count);
        }
    }

    return 0;
}
