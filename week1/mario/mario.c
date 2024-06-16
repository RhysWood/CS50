#include <stdio.h>

// Function to get a positive integer from user
int get_positive_int(void)
{
    int n;
    do
    {
        printf("Height: ");
        scanf("%d", &n);
    }
    while (n < 1 || n > 8);
    
    return n;
}

int main(void)
{
    int n = get_positive_int();

    // Print the pyramid
    for (int i = 0; i < n; i++)
    {
        // Print spaces
        for (int l = n - i - 1; l > 0; l--)
        {
            printf(" ");
        }
        
        // Print left hashes
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        
        // Print gap between halves
        printf("  ");
        
        // Print right hashes
        for (int m = 0; m <= i; m++)
        {
            printf("#");
        }
        
        // Move to the next line
        printf("\n");
    }

    return 0;
}

