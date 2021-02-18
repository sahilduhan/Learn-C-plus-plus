#include <stdio.h>
int main() {
  char string_1[100] = " sahil duhan ", string_2[] = " is a good boyy";
  int length, j;

  length = 0;
  while (string_1[length] != '\0') {
    ++length;
  }
  for (j = 0; string_2[j] != '\0'; ++j, ++length) {
    string_1[length] = string_2[j];
  }
  string_1[length] = '\0';
  
  printf(" After concatenation: ");
  printf(string_1);


  return 0;
}