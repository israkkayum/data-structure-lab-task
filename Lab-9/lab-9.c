#include <stdio.h>
#include <string.h>

void matchingStr();

char str[100], patstr[100], repstr[100], temstr[100];
int i = 0, j = 0, k, c = 0, m = 0, find = 0;

int main()
{
    printf("Enter the main string = ");
    gets(str);

    printf("Enter the pattern string = ");
    gets(patstr);

    printf("Enter the replace string = ");
    gets(repstr);

    matchingStr();

    if (find == 1)
    {
        printf("Modify Result = %s\n", temstr);
    }
    else
    {
        printf("Sorry, pattern doesn't match!!");
    }

    return 0;
}

void matchingStr()
{
    while (str[c] != '\0')
    {
        if (str[m] == patstr[i])
        {
            i++;
            m++;

            if (patstr[i] == '\0')
            {
                find = 1;

                for (k = 0; repstr[k] != '\0'; k++, j++)
                {
                    temstr[j] = repstr[k];
                }

                i = 0;
                c = m;
            }
        }

        else
        {
            temstr[j] = str[c];

            j++;
            c++;
            m = c;
            i = 0;
        }
    }

    temstr[j] = '\0';
}