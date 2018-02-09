#include <stdio.h>
void
main (int argc, char **argv)
{
  if (argc == 2)
    readstr ((char *) argv[1]);
  else
    printf ("Usage:%s <string for print>", (char *) argv[0]);
  return 0;
}

void
readstr (char *str)
{
  char buff[16];
  strcpy ((char *) buff, str);
  printf ("%s", (char *) buff);
}
