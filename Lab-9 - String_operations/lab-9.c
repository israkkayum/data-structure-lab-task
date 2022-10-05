#include <stdio.h>
#include <string.h>

void matchingStr();

char mainstr[100], patstr[100], repstr[100], temstr[100];
int a = 0, b = 0, c = 0, d, e = 0, find = 0;

int main()
{
    printf("\nEnter the main string = ");
    fgets(mainstr, 100, stdin);

    printf("\nEnter the pattern string = ");
    fgets(patstr, 100, stdin);

    printf("\nEnter the replace string = ");
    fgets(repstr, 100, stdin);

    matchingStr();

    if (find == 1)
    {
        printf("\nModify Result = %s\n", temstr);
    }
    else
    {
        printf("\nSorry, pattern doesn't match!!\n");
    }

    return 0;
}

void matchingStr()
{
    while (mainstr[c] != '\0')
    {
        if (mainstr[e] == patstr[a])
        {
            a++;
            e++;

            if (patstr[a] == '\0')
            {
                find = 1;

                for (d = 0; repstr[d] != '\0'; d++, b++)
                {
                    temstr[b] = repstr[d];
                }

                a = 0;
                c = e;
            }
        }

        else
        {
            temstr[b] = mainstr[c];

            b++;
            c++;
            e = c;
            a = 0;
        }
    }

    temstr[b] = '\0';
}