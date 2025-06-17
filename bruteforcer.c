#include <stdio.h>
#include <string.h>
#include "bruteforcer.h"
#include <stdlib.h>

int bruteforce ( char pwd[], int pwd_max_len,char solution[], char list[], int l, int *found) {
        printf("Trying: %s \n", solution); /* This line is optional, it is just to see what solution the algorith is trying*/
        if (*found || l >= pwd_max_len) return 0;
        if (strcmp(solution, pwd) == 0) {
                printf ("the password is: %s \n",solution);
                *found = 1;
                return 0;
        }
        else{
                for(int i=0; i<94; i++) {
                        solution[l] = list[i];
                        solution[l + 1] = '\0';
                        bruteforce(pwd,pwd_max_len,solution,list,l+1,found);
                        if (*found) return 0;

                }
        }
}
