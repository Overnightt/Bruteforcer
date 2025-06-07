#include <stdio.h>
#include <string.h>
#include "bruteforcer.h"


int main() {
    char pwd[100]="";
    while ((strlen(pwd) > 20) || (strlen(pwd) == 0))
        {
        printf("Please enter a password, all characters are allowed, maximum 20 characters   ");
        scanf("%s", pwd);
        }
        char solution[20] = ""; /*this will be the guess of the bruteforce function */
        char list[] = "azertyuiopqsdfghjklmwxcvbnAZERTYUIOPQSDFGHJKLMWXCVBN1234567890&é(-è_çà)=$*ù!:;,<>#{[^@]}¤£µ%./§?°+";  /*this is the list of all possible character in the password */
        bruteforce ( pwd, solution, list, 0, 0);
    return 0;
}
