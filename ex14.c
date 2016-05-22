#include <stdio.h>
#include <ctype.h>

// forward declarations
int can_print_it(char ch);
void print_letters(char arg[]);

// function to print each argument
void print_arguments(int argc, char *argv[])
{
  int i = 1;

  for(i = 0; i < argc; i++) {
    print_letters(argv[i]);
  }
}

// function to print each letter of each argument
void print_letters(char arg[])
{
  int i = 0;

  for(i = 0; arg[i] != '\0'; i++) {
    char ch = arg[i];

    // actually do the printing
    if(can_print_it(ch)) {
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
