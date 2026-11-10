#include <stdio.h>

int main(){
    //beim aufrufen text übergeben

    //leet das jedes e im text durch einen 3er ersetzt

    int leet = 0;
    char text[100];

    printf("Geben Sie einen Text ein: ");
    fgets(text, sizeof(text), stdin);

    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == 'e') {
            text[i] = '3';
            leet++;
        }
    }

    printf("Leet Text: %s\n", text);
    printf("Anzahl der ersetzten Buchstaben: %d\n", leet);

    return 0;


    // Falls leet buchstaben ersetzt = anzahl der buchstaben
    //

    

    printf("Halllo welt");

    return 0;




}