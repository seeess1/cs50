#include <stdio.h>
#include <string.h>
#include <ctype.h>

// program requires one command line argument
int main(int argc, char *argv[])
{
    // store the command line argument as the key
    char *k = argv[1];
    // check to make sure only one command line argument has been entered
    if (argc == 2)
    {
        // iterate over the key
        for (int i = 0; i < strlen(k); i++)
        {
            // make sure the key only includes characters, not integers
            if (!isalpha(k[i]))
            {
                printf("need array of characters for key\n");
                return 1;
            }
        }
    }
    else
    {
        printf("need one argument \n");
        return 1;
    }
    
    // user enters the plaintext string to be encrypted
    printf("plaintext: ");
    char p[1000];
    fgets (p, 1000, stdin);
    printf("ciphertext: ");
    
    // iterate over the plaintext
    for (int j = 0, l = 0; j < strlen(p); j++)
    {
        // check for character to make sure key isn't applied to space or other value
        if (isalpha(p[j]))
        {
            // formula that causes key to recycle if it is shorter than plaintext
            int m = l % strlen(k);
            
            // check if plaintext and key are uppercase for proper ASCII value reset
            if (isupper(p[j]) && isupper(k[m]))
            {
                int w = (((p[j] - 65 + k[m] - 65) % 26) + 65);
                printf("%c", w);
            }
            // check if upper plaintext and lower key for proper ASCII value reset
            else if (isupper(p[j]) && islower(k[m]))
            {
                int x = (((p[j] - 65 + k[m] - 97) % 26) + 65);
                printf("%c", x);
            }
            // check if lower plaintext and upper key for proper ASCII value reset
            else if (islower(p[j]) && isupper(k[m]))
            {
                int y = (((p[j] - 97 + k[m] - 65) % 26) + 97);
                printf("%c", y);
            }
            // check if lower plaintext and key for proper ASCII value reset
            else if (islower(p[j]) && islower(k[m]))
            {
                int z = (((p[j] - 97 + k[m] - 97) % 26) + 97);
                printf("%c", z);
            }
            // increment l to advance key by 1 character
            l++;
        }
        // if a space or punctuation mark, reprint the original
        else
        {
            (printf("%c", p[j]));
        }
    }
    return 0;
}
