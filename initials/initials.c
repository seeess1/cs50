#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    printf("Your full name: ");
    // user enters full name
    char p[1000];
    fgets (p, 1000, stdin);
    // go ahead and print first letter of first name in uppercase
    printf("%c", toupper(p[0]));
    
    // iterate over name
    for (int i = 0; i < strlen(p); i++)
    {
        // if a space between a first, middle, or last name, then print the following letter in uppercase
        if (p[i] == ' ')
        {
            printf("%c", toupper(p[i + 1]));
        }
    }
    printf("\n");
}
