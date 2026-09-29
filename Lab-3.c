/*Lab no 3: Write a C program to test whether a given identifier is valid or not*/
#include <stdio.h>
#include <ctype.h>
int main()
{
    char a[10];
    int flag, i = 1;
    printf("\n Enter an identifier:");
    gets(a);
    if (isalpha(a[0]) || a[0] == '_')
        flag = 1;
    else
        printf("\n Not a valid identifier\n");
    while (a[i] != '\0')
    {
        if (!isdigit(a[i]) && !isalpha(a[i]) && a[i] != '_')
        {
            flag = 0;
            break;
        }
        i++;
    }
    if (flag == 1)
        printf("\n Valid identifier \n");
    else
        printf("Not a valid identifier\n");
    return 0;
}