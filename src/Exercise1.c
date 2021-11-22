/*
1. Receive a maximum 4-digit integer n. Write a program to read the number n.
 ________________________________________________
| Input: 1234                                    |
| Output: one thousand two hundred thirty four   |
|________________________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex1(int n){
	//Your codes here
	 int i, a[4];
 
 
 if (n > 999 && n < 10000)
 {
  
  for (i = 0; i < 4; i++)
  {
   a[i] = n % 10;
   n = n / 10;
  }
  switch (a[3])
  {
  case 1:printf(" one "); break;
  case 2:printf(" two "); break;
  case 3:printf(" three "); break;
  case 4:printf(" four "); break;
  case 5:printf(" five "); break;
  case 6:printf(" six "); break;
  case 7:printf(" seven "); break;
  case 8:printf(" eight "); break;
  case 9:printf(" nine "); break;
  }
  printf(" thousand ");
  switch (a[2])
  {
  case 1:printf(" one "); break;
  case 2:printf(" two "); break;
  case 3:printf(" three "); break;
  case 4:printf(" four "); break;
  case 5:printf(" five "); break;
  case 6:printf(" six "); break;
  case 7:printf(" seven "); break;
  case 8:printf(" eight "); break;
  case 9:printf(" nine "); break;
  case 0:printf(" zero "); break;
  }
  printf(" hundred ");
  switch (a[1])
  {
  case 1:printf(" tem "); break;
  case 2:printf(" twenty "); break;
  case 3:printf(" thirty "); break;
  case 4:printf(" forty "); break;
  case 5:printf(" fifty "); break;
  case 6:printf(" sixty "); break;
  case 7:printf(" seventy "); break;
  case 8:printf(" eighty "); break;
  case 9:printf(" ninety "); break;
  case 0:printf(" odd "); break;
  }
  switch (a[0])
  {
  case 1:printf(" one \n"); break;
  case 2:printf(" two \n"); break;
  case 3:printf(" three \n"); break;
  case 4:printf(" four \n"); break;
  case 5:if (a[1] == 0) printf(" five \n");
      else printf(" lam \n"); break;
  case 6:printf(" six \n"); break;
  case 7:printf(" seven \n"); break;
  case 8:printf(" eight \n"); break;
  case 9:printf(" nine \n"); break;
  }
 }
 
}

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int testcase = atoi(argv[1]);
	
	Ex1(testcase);
	
	return 0;
}
