#include <stdio.h>
#include <string.h>



int main() {
    char pwd[100]="";
    while ((strlen(pwd) > 20) || (strlen(pwd) == 0))
        {
        printf("Please enter a password, all characters are allowed, maximum 20 characters   ");
        scanf("%s", pwd);
        }
    return 0;
}
