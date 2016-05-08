#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.5432;
  char initial = 'R';
  char first_name[] = "Jonathan";
  char last_name[] = "Frederick";
  int my_octal = 023;
  int my_hex = 0x23;
  int letter_hex = 0xabc;

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
         first_name, initial, last_name);
  printf("This is the octal 023 as an octal - %o.\n", my_octal);
  printf("This is the octal 023 as an int- %d.\n", my_octal);
  printf("This is the hex 0x23 as a hex - %x.\n", my_hex);
  printf("This is the hex 0x23 as an int - %d.\n", my_hex);
  printf("A hex with uppercase letters - %x.\n", letter_hex);
  printf("A hex with lowercase letters - %X.\n", letter_hex);
  printf("The same hex in decimal - %d.\n", letter_hex);
  printf("");

  return 0;
}
