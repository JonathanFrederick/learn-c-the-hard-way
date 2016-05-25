#include <stdio.h>
#include <assert.h>  // for assert functon/macro
#include <stdlib.h>  // for malloc and free functions and NULL macro
#include <string.h>  // for strdup

// initialize a Person struct and the desired attributes
struct Person {
  char *name;
  int age;
  int height;
  int weight;
};

// a function for creating an instance of a Person struct
struct Person *Person_create(char *name, int age, int height, int weight)
{
  // allocate enough memory to hold a Person and return a pointer
  struct Person *who = malloc(sizeof(struct Person));
  // test that the function is being used correctly
  assert(who != NULL);

  who->name = strdup(name);  // points to a new copy of name
  who->age = age;
  who->height = height;
  who->weight = weight;

  return who;
}

void Person_destroy(struct Person *who)
{
  assert(who != NULL);

  // free up the memory that holds the Person
  free(who->name);
  free(who);
}

void Person_print(struct Person *who)
{
  printf("Name: %s\n", who->name);
  printf("\tAge: %d years old\n", who->age);
  printf("\tHeight: %d inches\n", who->height);
  printf("\tWeight: %d pounds\n", who->weight);
}

int main(int argc, char *argv[])
{
  // make two people structures
  struct Person *joe = Person_create(
          "Joe Alex", 32, 64, 140);

  struct Person *frank = Person_create(
          "Frank Blank", 20, 72, 180);

  // print them out where they are in memory
  printf("Joe is at memory location %p:\n", joe);
  Person_print(joe);

  printf("Frank is at memory location %p:\n", frank);
  Person_print(frank);

  // make everyone age 20 years and then print them again
  joe->age += 20;
  joe->height -= 2;
  joe->weight += 40;
  Person_print(joe);

  frank->age += 20;
  frank->weight += 20;
  Person_print(frank);

  //destroy them both so we clean up
  Person_destroy(joe);
  Person_destroy(frank);

  return 0;
}


// malloc feels dangerous
