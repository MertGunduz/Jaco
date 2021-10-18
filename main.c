#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>

int main()
{
    // User Input Data
    int passwordLength;
    char includeSymbols;
    char includeNumbers;
    char includeLowerCase;
    char includeUpperCase;

    // Arrays
    char Symbols_Array[] = {'!', '£', '^', '+', '$', '#', '%', '&', '[', ']', '{', '}', '(', ')', '?', '-', '*'};
    char Numbers_Array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    char LowerCase_Array[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    char UpperCase_Array[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};

    // Array Lengths
    int Symbols_ArrayLength = sizeof(Symbols_Array);
    int Numbers_ArrayLength = sizeof(Numbers_Array);
    int LowerCase_ArrayLength = sizeof(LowerCase_Array);
    int UpperCase_ArrayLength = sizeof(UpperCase_Array);

    // Password Seed Random Data
    srand(time(NULL));

    printf("|------|\n");
    printf("| JACO |\n");
    printf("|------|\n\n");

    printf("Password Length --> ");
    scanf("%d", &passwordLength);

    printf("\n");

    do // Include Symbols Question
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

    do // Include Numbers Question
    {
        printf("Include Numbers (Y/N)\n\n");
        includeNumbers = getch();
        includeNumbers = toupper(includeNumbers);

        if (includeNumbers != 'Y' && includeNumbers != 'N')
        {
            printf("|----------------|\n");
            printf("| Invalid Answer |\n");
            printf("|----------------|\n\n");
        }
    } while(includeNumbers != 'Y' && includeNumbers != 'N');


    do // Include Lower Cases Question
    {
        printf("Include Lower Cases (Y/N)\n\n");
        includeLowerCase = getch();
        includeLowerCase = toupper(includeLowerCase);

        if (includeLowerCase != 'Y' && includeLowerCase != 'N')
        {
            printf("|----------------|\n");
            printf("| Invalid Answer |\n");
            printf("|----------------|\n\n");
        }
    } while(includeLowerCase != 'Y' && includeLowerCase != 'N');

    do // Include Upper Cases Question
    {
        printf("Include Upper Cases (Y/N)\n\n");
        includeUpperCase = getch();
        includeUpperCase = toupper(includeUpperCase);

        if (includeUpperCase != 'Y' && includeUpperCase != 'N')
        {
            printf("|----------------|\n");
            printf("| Invalid Answer |\n");
            printf("|----------------|\n\n");
        }
    } while(includeUpperCase != 'Y' && includeUpperCase != 'N');

    printf("Generated Password --> ");

    for (int i = 0; i < passwordLength; i = i)
    {
        if (includeSymbols == 'Y' && i != passwordLength)
        {
            printf("%c", Symbols_Array[rand() % (Symbols_ArrayLength - 1)]);
            i++;
        }

        if (includeNumbers == 'Y' && i != passwordLength)
        {
            printf("%c", Numbers_Array[rand() % (Numbers_ArrayLength - 1)]);
            i++;
        }

        if (includeLowerCase == 'Y' && i != passwordLength)
        {
            printf("%c", LowerCase_Array[rand() % (LowerCase_ArrayLength - 1)]);
            i++;
        }

        if (includeUpperCase == 'Y' && i != passwordLength)
        {
            printf("%c", UpperCase_Array[rand() % (UpperCase_ArrayLength - 1)]);
            i++;
        }
    }

    printf("\n");

    return 0;
}