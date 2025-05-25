/* You are given a string s, which contains stars *.
    In one operation, you can:
    Choose a star in s.
    Remove the closest non-star character to its left, as well as remove the star itself.
    Return the string after all stars have been removed.
*/

#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("Enter a string : ");
    scanf("%s", s);

    int n = strlen(s);
    int j = 1;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] != '*')
        {
            s[j++] = s[i];
        }
        else
        {
            j--;
        }
    }
    printf("%s", s);
}