#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    int passwordLength;
    char includeSymbols;
    char includeNumbers;
    char includeLowerCase;
    char includeUpperCase;

    char Symbols_Array[] = {'!', '£', '^', '+', '$', '#', '%', '&', '[', ']', '{', '}', '(', ')', '?', '-', '*'};
    char Numbers_Array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char LowerCase_Array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char UpperCase_Array[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    printf("|------|\n");
    printf("| JACO |\n");
    printf("|------|\n\n");

    printf("Password Length --> ");
    scanf("%d", &passwordLength);

    printf("\n");

    do
    {
        printf("Include Symbols (Y/N)\n\n");
        includeSymbols = getch();
        includeSymbols = toupper(includeSymbols);

        if (includeSymbols != 'Y' && includeSymbols != 'N')
        {
            printf("|----------------|\n");
            printf("| Invalid Answer |\n");
            printf("|----------------|\n\n");
        }
    } while (includeSymbols != 'Y' && includeSymbols != 'N');

    return 0;
}