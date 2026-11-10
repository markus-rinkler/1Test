#include <stdio.h>

int main(){

    int leet = 0;
    char text[100];

    printf("Geben Sie einen Text ein: ");
    fgets(text, sizeof(text));

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'e') {
            text[i] == '3';
            leet++;
        }
    }

    printf("Leet Text: %s\n", text);
    printf("Anzahl der Buchstaben: %d\n", leet);

    if (leet == sizeof(text)) {
        printf("Alle Buchstaben wurden ersetzt.\n");
    }

    printf("Hallo Welt ");

    return 0;
}