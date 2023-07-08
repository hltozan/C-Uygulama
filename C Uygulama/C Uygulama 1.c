#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    printf("Bir metin: ");
    fgets(text, sizeof(text), stdin);
    int length = strlen(text);
    printf("Girilen metnin uzunluğu: %d\n", length);
    return 0;
}