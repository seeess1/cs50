#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

/* program requires one command line argument
* command line argument should be an int, which will serve as encryption key
*/
int main(int argc, char *argv[])
{
    // check to make sure only one command line argument has been entered
    if (argc == 2)
    {
        // convert command line int to true int
        int i = atoi(argv[1]);
        printf("plaintext: ");
        // user enters plaintext to be encrypted
        char p[1000];
        fgets (p, 1000, stdin);
        printf("ciphertext: ");
        
        // iterate over plaintext and encrypt plaintext based on key while resetting ASCII values
        for (int j = 0; j < strlen(p); j++)
        {
            if (isalpha(p[j]) && isupper(p[j]))
            {
                int u = (((p[j] - 65 + i) % 26) + 65);
                printf("%c", u);    
            }
            else if (isalpha(p[j]) && islower(p[j]))
            {
                int l = (((p[j] - 97 + i) % 26) + 97);
                printf("%c", l);
            }
            else
            {
                printf("%c", p[j]);
            }
        }
    }
    else 
    {
        printf("one integer needed \n");
        return 1;
    }
    
    printf("\n");
    return 0;
}
