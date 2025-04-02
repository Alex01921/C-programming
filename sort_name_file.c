#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_NAME_LENGTH 100
int compare(const void *a, const void *b)
{
    return strcmp((const char *)a, (const char *)b);
}
int main()
{
    char names[MAX_NAME_LENGTH][MAX_NAME_LENGTH];
    int numNames = 0;
    FILE *file = fopen("student_names.txt", "r");
    if (file == NULL)
    {
        printf("Failed to open the file.\n");
        return 1;
    }
    char name[MAX_NAME_LENGTH];
    while (fgets(name, sizeof(name), file) != NULL)
    {
        name[strcspn(name, "\n")] = '\0';  
        strcpy(names[numNames], name);
        numNames++;
    }
    fclose(file);
    qsort(names, numNames, sizeof(names[0]), compare);
    file = fopen("sorted_names.txt", "w");
    if (file == NULL)
    {
        printf("Failed to create the file.\n");
        return 1;
    }
    printf("Sorted names:\n");
    for (int i = 0; i < numNames; i++)
    {
        printf("%s\n", names[i]);
        fprintf(file, "%s\n", names[i]);
    }
    fclose(file);
    return 0;
}
