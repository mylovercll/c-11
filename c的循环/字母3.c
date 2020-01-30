#include<stdio.h>
void main()
{
    char ch = 0;
    printf("Please input an uppercase letter:");
    scanf_s("%c",&ch);
    
    int length = ch - 'A' + 1;
    for (int i = 0; i < length; i++)
    {
        char temp = 'A' - 1;
        for (int j = 0; j < (length - i - 1); j++)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%c", ++temp);
        }
        for (int j = 0; j < i; j++)
        {
            printf("%c", --temp);
        }

        printf("\n");
    }
  
}