#include <stdio.h>

int main() {
    FILE *file;
    char text[100];
    file = fopen("metin.txt", "w");
    if (file == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }
    printf("Metni girin: ");
    fgets(text, sizeof(text), stdin);
    fprintf(file, "%s", text);
    fclose(file);
    file = fopen("metin.txt", "r");
    if (file == NULL) {
        printf("Dosya acilamadi.\n");
        return 1;
    }
    printf("Dosyadan okunan metin:\n");
    while (fgets(text, sizeof(text), file) != NULL) {
        printf("%s", text);
    }
    fclose(file);
    return 0;
}
