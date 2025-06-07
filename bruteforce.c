#include <stdio.h>
#include <string.h>

void bruteforce ( char pwd, char solution, char list, int i) {
        if (strcmp(solution, pwd) == 0)
                printf ("%s",solution);
        else
                for(int i=0, i<94; i++)
                        solution=list[i];
                        i = i+1;

}
