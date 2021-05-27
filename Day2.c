/*
Question- Draw the pattern

* * * *
*     *
*     *
*     *
* * * *

*/
#include <stdio.h>
int main()
{
   int i,j;
   for(i=0;i<5;i++)
   {
       for(j=0;j<4;j++)
       {
           if(i==0 || i==4 || j==0 || j==3)
           {
               printf("* ");   
           }
           else
           {   
                   printf("  ");
           }
       }
       printf("\n");
       
   }
   return 0;
}

/*
Question- Draw the pattern

* * * * *
* * * *
* * *
* *
*

*/
#include <stdio.h>
int main()
{
   int i,j;
   for(i=5;i>0;i--)
   {
       for(j=i;j>0;j--)
       {
           printf("* ");
       }
       printf("\n");
       
   }
   return 0;
}

/*
Question- Draw the pattern

        * 
      * * 
    * * * 
  * * * * 
* * * * * 

*/

#include <stdio.h>
int main()
{
   int i,j;
   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5-i;j++)
       {
          printf("  "); 
       }
       for(j=0;j<i;j++)
       {
           printf("* ");
       }
       printf("\n");
       
   }
   return 0;
}
