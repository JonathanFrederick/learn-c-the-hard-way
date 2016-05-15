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

  printf("\n");

  int j;
  for (i=0, j=10; i < j; i++, j--) {
    printf("i==%d and j==%d\n", i, j);
  };

  states[3] = NULL;
  printf("\nstate 3 is %s\n", states[3]); // prints "(null)" at %s

  argv[2] = states[2];
  printf("states 2 in argv %s\n", argv[2]);  // prints as state

  states[1] = argv[1];
  printf("argv 1 in states %s\n", states[1]);  //prints as "(null)"



  return 0;

}
