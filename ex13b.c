#include <stdio.h>

int main(int argc, char *argv[])
{
  if(argc < 2) {
    printf("ERROR: You need at least one argument.\n");
    return 1;
  }

  int i = 0, h = 1;
  char letter;
  // char letters[] = {'a', 'A', 'z', 'Z'};
  // int count = 4;
  // for(i = 0; i < count; i++) {
  //   printf("%c - %d\n", letters[i], letters[i]);
  // }
  for(h = 1; h < argc; h++) {
    for(i = 0; argv[h][i] != '\0'; i++) {
      letter = argv[h][i];
      if(letter > 64 && letter < 91) {
        letter = letter + 32;
      }
      printf("%d - %c", i, letter);
      if(letter != 'a' && letter != 'e' && letter != 'i' &&
         letter != 'o' && letter != 'u') {
           printf(" - This is not a vowel");
      }
      printf("\n");
    }
    printf("\n");
  }
}
