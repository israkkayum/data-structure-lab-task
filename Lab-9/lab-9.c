#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], patstr[100], repstr[100];
    char temstr1[100][100], temstr2[100][100];
    int k = 0, c = 0, m = 0, n = 0, i, l;

    printf("Enter the main string = ");
    gets(str);

    printf("Enter the pattern string = ");
    gets(patstr);

    printf("Enter the replace string = ");
    gets(repstr);

    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] == ' ' || str[i] == '\0')
        {
            temstr1[c][k] = '\0';
            c++;
            k = 0;
        }
        else
        {
            temstr1[c][k] = str[i];
            k++;
        }
    }

    for (i = 0; i <= strlen(patstr); i++)
    {
        if (patstr[i] == ' ' || patstr[i] == '\0')
        {
            temstr2[m][n] = '\0';
            m++;
            n = 0;
        }
        else
        {
            temstr2[m][n] = patstr[i];
            n++;
        }
    }

    for (i = 0; i < c; i++)
    {
        for (l = 0; l < m; l++)
        {
            if (temstr1[i] == temstr2[l])
            {
                temstr1[i] = repstr[l];

                printf("The Result = %s", temstr1);
                break;
            }
            else
            {
                printf("Not found");
                break;
            }
        }
    }

    return 0;
}