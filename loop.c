#include <stdio.h>
int main() {
    char str[1000], ch='l',ch2='p';
    int count = 0,count2 = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch2 == str[i])
            ++count2;
    }

    if (count==count2)
        printf("yes");   
    else 
        printf("no");
    return 0;
}
