#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Percorre a string contando as ocorrências da letra a
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' ou 'A' ocorre %d vezes na string.\n", count);
    } else {
        printf("A letra 'a' ou 'A' não foi encontrada.\n");
    }

    return 0;
}
