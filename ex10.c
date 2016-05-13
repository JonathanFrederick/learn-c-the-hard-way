#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;

  // go through each string in argv
  // skip the argv[0] because that is the file name
  for (i = 1; i < argc; i++) {
    printf("arg %d: %s\n", i, argv[i]);
  }

  // let's make our own array of strings
  char *states[] = {
    "Florida", "Wyoming",
    "Colorado", "Virginia"
  };

  int num_states = 4;
  // if this is too big, we get a seg fault normally
  //     and Valgrind panics


  for (i = 0; i < num_states; i++) {
    printf("state %d: %s\n", i, states[i]);
  }

  return 0;

}
