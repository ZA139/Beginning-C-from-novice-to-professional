#include<stdio.h>

int main(void)

{

    size_t nGrades;

    printf("Enter The Number of Grades:");

    scanf("%d",&nGrades);

    int Grades[nGrades];

    long sum=0L;

    float average=0.0f;

    printf("\n Enter the %d gardes:",nGrades);

    

    size_t i=0;

    for(i=0;i<nGrades;i++)

    {

                          printf("\n%d> ",i+1);

                          scanf("%d",&Grades[i]);

                          sum+=Grades[i];

    }

    printf("The grades you entered are:\n");

    for(i=0;i<nGrades;i++)

    {

                          printf("Grades[%d]:%-4d",i,Grades[i]);

                          if((i+1)%5==0)

                          printf("\n");

    }

    average=sum/nGrades;

    printf("\nThe average of all grades is:%.2f",average);

    system("pause");

    return 0;

}
