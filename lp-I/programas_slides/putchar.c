#include <stdio.h>
#include <ctype.h>

int main(){
    int c;
    char string [256];

    while ((c = getchar()) != EOF){
        putchar(tolower(c));
        if(c == '9')
            break;
    }

    printf("Insert your full address: ");
    fgets(string, 255, stdin);
    puts("Your address is:");
    puts(string);
    return 0;
}