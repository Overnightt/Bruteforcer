#include <stdio.h>
#include <string.h>
#include "bruteforcer.h"

void bruteforce ( char pwd[], char solution[], char list[], int l) {
        if (l >= 20) return;
        if (strcmp(solution, pwd) == 0)
                printf ("%s",solution);
        else
                for(int i=0; i<94; i++) {
                        solution[l] = list[i];
                        solution[l + 1] = '\0';
                        bruteforce(pwd,solution,list,l+1);
                        i = i+1;
                }

}
