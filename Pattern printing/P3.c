#include<stdio.h>
#include<conio.h>


int main()
 {
    printf("\n\tHalf pyramid using *\n");
     for(int i=1;i<=5;i++)
      {
          printf("\n\t");
	      for(int j=1;j<=i;j++)
	      printf("* ");
       }
     getch();
     return 0;
}
