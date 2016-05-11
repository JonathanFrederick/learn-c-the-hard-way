#include <stdio.h>

int main(int argc, char *argv[])
{
  int areas[] = {10, 12, 13, 14, 20};
  char name[] = "Jon";
  char full_name[] = {
    'J', 'o', 'n',
    ' ', 'R', '.', ' ',
    'F', 'r', 'e', 'd', 'e', 'r', 'i', 'c', 'k', '\0'
  };

  printf("The size of an int: %ld\n", sizeof(int));
  printf("The size of areas (int[]); %ld\n",
         sizeof(areas));
  printf("The number of ints in areas: %ld\n",
         sizeof(areas) / sizeof(int));
  printf("The first area is %d, the 2nd is %d.\n",
         areas[0], areas[1]);

  printf("The size of a char: %ld\n", sizeof(char));
  printf("The size of name (char[]): %ld\n",
         sizeof(name));
  printf("The number of chars: %ld\n",
         sizeof(name) / sizeof(char));

  printf("THe size of full_name (char[]): %ld\n",
         sizeof(full_name));
  printf("The number of chars: %ld\n",
         sizeof(full_name) / sizeof(char));

  printf("name=\"%s\" and full_name=\"%s\"\n\n",
         name, full_name);

  printf("The first area is %d, the 2nd is %d.\n",
         areas[0], areas[1]);
  areas[0] = 20;
  areas[1]= 24;
  printf("The new first area is %d, the 2nd is %d.\n\n",
         areas[0], areas[1]);

  printf("name=\"%s\" and full_name=\"%s\"\n",
         name, full_name);
  name[1] = 'a';
  full_name[1] = 'a';
  printf("NEW\nname=\"%s\" and full_name=\"%s\"\n",
         name, full_name);

  name[2] = areas[4];
  printf("NEW WITH ASSIGNED INT\nname=\"%s\" and full_name=\"%s\"\n\n",
         name, full_name);


  return 0;
}
