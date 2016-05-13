#include <stdio.h>

int main(int argc, char *argv[])
{
  int numbers[4] = {0};
  char name[4] = {'a'};


  // first print them out raw
  print_nums(numbers);  // TODO: fix compiler warnings
  print_name(name);

  // setup the numbers
  numbers[0] = 1;
  numbers[1] = 2;
  numbers[2] = 3;
  numbers[3] = 4;

  // setup the name
  name[0] = 'J';
  name[1] = 'o';
  name[2] = 'n';
  name[3] = '\0';

  //then print them out initialized
  print_nums(numbers);
  print_name(name);

  // another way to use name
  char *another = "Jon";

  printf("another %s\n", another);
  printf("another each %c %c %c %c\n\n",
         another[0], another[1],
         another[2], another[3]);

  // EXTRA CREDIT
  numbers[0] = 'a';
  numbers[1] = 'b';
  numbers[2] = 'c';
  numbers[3] = 'd';

  printf("Characters in int array: %c %c %c %c\n",
         numbers[0], numbers[1], numbers[2], numbers[3]);
         //No compiler warnings???

  name[0] = 1;
  name[1] = 2;
  name[2] = 3;
  name[3] = 4;

  printf("Ints in a char array: %d %d %d %d\n",
         name[0], name[1], name[2], name[3]);
         //No compiler warnings??

  printf("Chars as int: %d\n", numbers);

  char *new_name = "abcd";
  printf("Chars as int: %d\n", new_name);


  return 0;
}

int print_nums(int nu[])
{
  printf("numbers each: %d %d %d %d\n",
         nu[0], nu[1], nu[2], nu[3]);

  return 0;
}

int print_name(char na[])
{
  printf("name each: %c %c %c %c\n",
         na[0], na[1], na[2], na[3]);
  printf("name: %s\n\n", na);

  return 0;
}
