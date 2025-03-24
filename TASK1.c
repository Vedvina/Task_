#include <stdio.h>
#include <string.h>
#define MAX 10
char nonRepeatingCharacter(char *str) 
{
    int i, j;
    int size = strlen(str); // Calculate the length of the input string
    
    // Outer loop: examine each character in the string sequentially
    for (i = 0; i < size; i++) 
    {
        int key = 0; // Flag to track if current character appears elsewhere
        
        // Inner loop: compare current character with all other characters
        for (j = 0; j < size; j++) 
        {
            // Skip self-comparison but check for duplicates
            if (i != j && str[i] == str[j]) 
            { 
                key = 1; // Mark as duplicate found
                break; // Exit inner loop early since we found a duplicate
            }
        }
        
        // If no duplicates were found for this character
        if (key == 0) 
        {
            return str[i]; // Return the first non-repeating character
        }
    }
    
    return 0; // Return null character if all characters repeat
}

int main() 
{
    char strr[MAX]; 
    
    // Prompt user and read input string
    printf("Enter a string: ");
    scanf("%s", strr);
    
    // Display the first non-repeating character or null if none exists
    printf("%c\n", nonRepeatingCharacter(strr));
    
    return 0; // Indicate successful program termination
}