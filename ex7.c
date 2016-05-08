#include <stdio.h>

int main(int argc, char *argv[])
{
  int bugs = 100;
  double bug_rate = 1.2;

  printf("You have %d bugs at the imaginary rate of %f bugs.\n",
         bugs, bug_rate);

  long universe_of_defects = 1L * 1024L * 1024L * 1024L;
  printf("The entire universe has %ld bugs.\n",
         universe_of_defects);

  double expected_bugs = bugs * bug_rate;
  printf("You are expected to have %f bugs.\n",
         expected_bugs);

  double part_of_universe = expected_bugs / universe_of_defects;
  printf("That is only a %e portion of the universe.\n",
         part_of_universe);

  // this makes no sense, just a demo of something weird
  char nul_byte = '\0';
  int care_percentage = bugs * nul_byte;
  printf("Which means you should care %d%%.\n\n",
         care_percentage);

  long too_long_signed = 9999999999999999999L;
  // long too_long_unsign = 99999999999999999999L;

  printf("This is too long for a signed int - %lu.\n", too_long_signed);
  printf("A signed int uses a bit for positive vs. negative,\n\
an unsigned int uses that bit for larger (positive) numbers\n\n");

  char ch_a = 'a';
  char ch_b = 'b';
  printf("This is the character 'a' as an int - %d.\n", ch_a);
  printf("This is the character 'b' as an int - %d.\n", ch_b);
  printf("This is the character 'b' as a hex - %x.\n", ch_b);
  printf("This is the resulting char when you halve 'b' - %c\n\n", ch_b / 2);
  printf("A variable is stored as binary and when called as\n\
a char, is converted to the corresponding unicode representation?\n\n");

  int int_b = ch_b;
  printf("This is 'b' assigned to an int variable - %d.\n", int_b);

  return 0;
}
