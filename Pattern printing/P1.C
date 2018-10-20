#include<stdio.h>
#include<conio.h>

int main()
 {
     printf("\n\tHalf pyramid using numbers\n");
     for(int i=1;i<=5;i++)
      { printf("\n\t");
	    for(int j=1;j<=i;j++)
	     printf("%d ",j);
       }
     getch();
     return 0;
}
