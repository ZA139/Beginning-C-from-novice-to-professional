#include<stdio.h>
#include<limits.h>
int main(void)
{
    long test=0l;
    printf("\nPlease entrt a letter less than %d.",LONG_MAX);
    scanf("%Ld",test);
    
    if(test%2L==0L)
    {
    printf("\nThe number is even!")
        if((test/2L)/2L==0L)
           {
           printf("\n Half of this number is also even!");
           printf("\n That's a interesting thing,isn't it?");
           }
    }  
    else
      printf("\nThe number %Ld is odd",test);
    system("pause");
    return 0;
}
