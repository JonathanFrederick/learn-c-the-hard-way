#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv

  int i = argc - 1;
  while (i > -1) {
    printf("arg %d: %s\n", i, argv[i]);
    i--;
  };

  // let's make our own array of strings
  char *states[] = {
    "Ohio", "Alabama",
    "Alaska", "Mississippi"
  };

  int num_states = 4;
  i = 0;  // variable to track
  while(i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  // copy argv to states
  i = 0; // reset i
  while(i < num_states && i < argc) {
    states[i] = argv[i];
    i++;
  }

  // print "states" again
  i = 0;  // reset i
  while(i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }


  return 0;
}
