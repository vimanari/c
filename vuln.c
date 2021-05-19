#include <stdio.h>
#include <string.h>

void vuln() {

    char buff[16];
    scanf("%s",buff);
    printf("You entered: %s\n",buff);
}

void secret() {

    printf("You aren't supposed to be here :P\n");
}

int main() {

    vuln();

    return 0;
}
