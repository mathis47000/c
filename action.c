#include "action.h"

void actionBox(char **actions, int n)
{
    printf("+---------------------+\n");
    printf("| What will you do?   |\n");
    for (int i = 0; i < n; i++)
    {
        int lengthSpaces = 17 - strlen(actions[i]);
        printf("| %d. %s", i + 1, actions[i]);
        for (int i = 0; i < lengthSpaces; i++)
        {
            printf(" ");
        }
        printf("|\n");
    }
    printf("+---------------------+\n");
}

void removeLines(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\033[1A\033[2K");
    }
}