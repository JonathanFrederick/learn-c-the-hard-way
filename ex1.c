#include <stdio.h>

int main(int argc, char *argv[])
{
  puts("It is not the critic who counts, not the man who points out how");
  puts("the strong man stumbles or how the doer of deeds could have done");
  puts("them better.  The credit belongs to the man who is actuall in the");
  puts("arena, whose face is marred with dust and sweat and blood, who");
  puts("strives valiantly, who errs, who comes short again and again because");
  puts("there is no effort without error and shortcoming, but who does");
  puts("actually strive to do the deeds, who knows great enthusiasms, the");
  puts("great devotions, who spends himself in a worthy cause, who at the");
  puts("best, in the end, knows the triumph of high acheivement, and at the");
  puts("worst, if he fails, at least fails while daring greatly so that his");
  puts("place may never be with those cold and timid souls who know neither");
  puts("victory nor defeat.");

  FILE* f = fopen("f.txt", "w+");
  fputs("Hello world", f);
  fclose(f);
  return 0;
}
