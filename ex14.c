#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[], int l);

// function to print each argument
void print_arguments(int argc, char *argv[])
{
  int i = 1;
  int len;

  for(i = 0; i < argc; i++) {
    // not changing pointers because that would break strlen
    len = strlen(argv[i]);
    print_letters(*(argv + i), len);
  }
}

// function to print each letter of each argument
void print_letters(char arg[], int l)
{
  int i = 0;
  char *cur_char = arg;
  for(i = 0; i < l; i++) {
    char ch = *(cur_char + i);

    // actually do the printing
    if(isalpha(ch) || isblank(ch)) {
      printf("'%c' == %d \n", ch, ch);
    }
  }

  printf("\n");
}

// function to make sure each character is a letter
int can_print_it(char ch)
{
  // new toys, weee!!!
  return isalpha(ch) || isblank(ch);
}

int main(int argc, char *argv[])
{
  // just start rabbit hole
  print_arguments(argc, argv);
  return 0;
}
