#include <string.h>
int main()
{
    char inputString[1000];
    char subString[100];
    printf("Enter the main string: ");
    gets(inputString);
    printf("Enter the substring to search for: ");
    gets(subString);

    if (strstr(inputString, subString) != NULL)
    {
        printf("Substring '%s' is present in the main string.\n", subString);
    }
    else
    {
        printf("Substring '%s' is not present in the main string.\n", subString);
    }

    return 0;
}
