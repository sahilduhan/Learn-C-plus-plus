#include <stdio.h>
int main() {
    char string_name[150];
    int vowles ;

    vowles = 0;

    printf(" ENTER THE NAME: ");
    fgets(string_name, sizeof(string_name), stdin);
    for (int i = 0; string_name[i] != '\0'; ++i) {
        if (string_name[i] == 'a' || string_name[i] == 'e' || string_name[i] == 'i' ||
            string_name[i] == 'o' || string_name[i] == 'u' || string_name[i] == 'A' ||
            string_name[i] == 'E' || string_name[i] == 'I' || string_name[i] == 'O' ||
            string_name[i] == 'U')
        {
            ++vowles;
        } 
        
    }

    printf("Vowels: %d", vowles);
    return 0;
}
