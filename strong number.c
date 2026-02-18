#include <stdio.h> 
int main() { 
    int num, n, r, fact, i, sum = 0; 
    printf("Enter a number: "); 
    scanf("%d", &num); 
    n = num; 
    while (n > 0) { 
        r = n % 10; 
        fact = 1; 
        for (i = 1; i <= r; i++) 
            fact *= i; 
        sum += fact; 
        n /= 10; 
    } 
    if (sum == num) 
        printf("Strong Number"); 
    else 
        printf("Not a Strong Number"); 
    return 0; 
} 
