#include <stdio.h>

struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

void Person_print(struct Person who)
{
  printf("Name: %s\n", who.name);
  printf("\tAge: %d years old\n", who.age);
  printf("\tHeight: %d inches\n", who.height);
  printf("\tWeight: %d pounds\n", who.weight);
}

struct Person Person_create(char *name, int age, int height, int weight)
{
  struct Person who;
  who.name = name;
  who.age = age;
  who.height = height;
  who.weight = weight;

  return who;
}

int main(int argc, char *argv[])
{
  struct Person joe = Person_create("Joe Alex", 32, 64, 140);
  Person_print(joe);

  printf("----\n");

  // just for fun
  Person_print(Person_create("Frank Blank", 20, 72, 180));

  return 0;
}
