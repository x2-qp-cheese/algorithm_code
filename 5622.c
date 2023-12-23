#include <stdio.h>
#include <string.h>

int main() {
    char word[16];

    scanf("%s", word);
    int length = strlen(word);
    int count = 0;

    for (int i = 0; i < length; i++) {
        char c = word[i];
        
        if (c == 'A' || c == 'B' || c == 'C')
            count += 3;
        else if (c == 'D' || c == 'E' || c == 'F')
            count += 4;
        else if (c == 'G' || c == 'H' || c == 'I')
            count += 5;
        else if (c == 'J' || c == 'K' || c == 'L')
            count += 6;
        else if (c == 'M' || c == 'N' || c == 'O')
            count += 7;
        else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
            count += 8;
        else if (c == 'T' || c == 'U' || c == 'V')
            count += 9;
        else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
            count += 10;
    }

    printf("%d", count);

    return 0;
}
