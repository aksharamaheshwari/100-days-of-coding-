//ques1- Print the initials of a name//
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: %c", name[0]);

    for (i = 1; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf(" %c", name[i + 1]);
        }
    }

    return 0;
}




//ques2- Print initials, but surname in full//

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, lastSpace = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    name[strcspn(name, "\n")] = '\0';

    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ')
        {
            lastSpace = i;
        }
    }

    printf("%c ", name[0]);

    for (i = 1; i < lastSpace; i++)
    {
        if (name[i] == ' ' && name[i + 1] != ' ')
        {
            printf("%c ", name[i + 1]);
        }
    }

    printf("%s", &name[lastSpace + 1]);

    return 0;
}
