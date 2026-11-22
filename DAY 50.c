//ques1- Change date format from dd/04/yyyy to dd-Apr-yyyy//

#include <stdio.h>

int main()
{
    int day, month, year;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("%02d-Apr-%d", day, year);

    return 0;
}



//ques2- Print all sub-strings of a string//

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i, j, k, n;

    printf("Enter a string: ");
    scanf("%s", str);

    n = strlen(str);

    printf("Substrings are:\n");

    for (i = 0; i < n; i++)
    {
        for (j = i; j < n; j++)
        {
            for (k = i; k <= j; k++)
            {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}
