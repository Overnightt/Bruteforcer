#include <stdio.h>
#include <string.h>
#include "bruteforcer.h"
#include <time.h>

int main() {
    char pwd[100]="";
    int pwd_max_len=6;    /* if you want to change the maximal length of a password*/
    while ((strlen(pwd) > pwd_max_len) || (strlen(pwd) == 0))
        {
        printf("Please enter a password, all characters are allowed, maximum %d characters ", pwd_max_len);
        scanf("%s", pwd);
        }
        char solution[100] = ""; /*this will be the guess of the bruteforce function */
        char list[] = "azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN1234567890&é(-è_çà)=$*ù!:;,<>#{[^@]}¤£µ%./§?°+";  /*this is the list of all possible character in the password */
        int found=0;
        clock_t start= clock();
        bruteforce ( pwd, pwd_max_len ,solution, list, 0, &found);
        clock_t end = clock();
        float time = (end - start) / CLOCKS_PER_SEC;
        printf("Time take to find password : %f /n", time);
    return 0;
}
