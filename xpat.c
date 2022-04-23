#include<stdio.h>

int
main ()
{
  int row;
  int clm;
  int sp;
  int sp1;
  int ip = 10;
  int odd = 10 * 2 - 3;
  for (row = 0; row < ip; row += 1)
    {
      for (sp = 0; sp < row; sp += 1)
	printf ("1");
      printf ("*");
      for (sp1 = 0; sp1 < odd; sp1 += 1)
	{
	  printf ("2");
	}
      odd -= 2;
      if (row < ip - 1)
	printf ("*");
      printf ("\n");
    }
    odd = 1;
for(row = ip; row > 1; row -= 1)
    {
        for(sp = 0;sp < row - 2; sp += 1)
            printf("1");
        printf("*");
        for(sp1 = 0; sp1 < odd; sp1 += 1)
        {
            printf("2");
        }
            odd += 2;
       // if(row < ip - 1)
            printf("*");
            printf("3");
        printf("\n");
    }
}
