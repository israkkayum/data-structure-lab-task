#include <stdio.h>
#include <string.h>

void matchingStr();

char mainstr[100], patstr[100], repstr[100], temstr[100];
int a = 0, b = 0, c = 0, d, e = 0, find = 0;

int main()
{
    printf("Enter the main string = ");
    gets(mainstr);

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