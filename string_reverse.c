#include<stdio.h>
#include<string.h>
int main()
{
    char str[50];
    int i, len;
    printf("Enter String: ");
    gets(str);
    len = strlen(str);
    printf("Reverse String: ");
    for(i = len; i>=0; i--)
    {
        printf("%c", str[i]);
    }
    return 0;
}