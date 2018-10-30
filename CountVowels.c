#include <stdio.h>
#include <stdlib.h>

int main() {
    char string[256];
    int counter = 0;
    int stringLength;

    printf("Please enter a word: ");
    scanf("%s",&string);

    stringLength = strlen(string);

    for(int i=0;i<stringLength;i++){
        if(string[i] == 'a' || string[i] == 'i' || string[i] == 'e' || string[i] == 'o' || string[i] == 'u')
            counter++;
    }
    printf("The word has %d vowels.",counter);
    return 0;
}
