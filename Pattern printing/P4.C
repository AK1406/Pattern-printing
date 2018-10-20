#include<stdio.h>
#include<conio.h>

int main()
 {
    printf("\n\tFull inverted Pyramid using *\n");
     for(int i=1;i<=5;i++)
      {
          printf("\n\t");
	      for(int j=1;j<=i;j++)
	      printf("* ");
       }
       for(int i=1;i<=5;i++)
       {
           printf("\n\t");
           for(int k=5;k>i;k--)
            printf("* ");
       }
     getch();
     return 0;
}
