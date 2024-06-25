#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));// 1024 byte = 1k
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i =0;
    while (s[i] != '\0')
    {
        printf("%c",s[i]);
        if(s[i] == ' ')
            printf("\n");
        i++;
    }
    
    
    return 0;
}
