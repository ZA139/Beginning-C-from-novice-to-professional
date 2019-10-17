#include <stdio.h>
#include <ctype.h>
int main(void)
{
  char answer = 'N';
  double total = 0.0;
  double value = 0.0;
  unsigned int count = 0;

  printf("\n This program calculates the average of "
         "any number");

  for (;;)
  {
    printf("\nEnter a value!");
    scanf("%lf", &value);
    total += value;
    ++count;
     
    printf("Do you want to enter another value?(Y or N)");
    getchar();
    scanf("%c", &answer);

    if (tolower(answer) == 'n') //to make it user friendly
      break; 
  }
  printf("\nThe average of given numbers is %.2lf !", total / count);
  return 0;
}
