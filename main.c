#include <stdio.h>
#include <stdlib.h>

int main()
{
   int U0,U1,U,n,i,Sum;
   U0=1;
   U1=2;
   printf("donner la valeur n \n");
   scanf("%d" ,&n);
   if(n==0)
   {
       printf("la valeur de U \t 0 est \t%d\n" ,U0);
    }
    else if(n==1)
   {
       printf("la valeur de U \t 1 est \t%d\n" ,U1);
   }

   else{
       for(i=2;i<=n;i++)
       { if(i%2)
       U=U1+U0;
       else
       U=U1+3*U0;
       printf("la valeur de U \t %d est \t%d\n" ,i,U);
       Sum=Sum+U;
       U0=U1;
       U1=U;
       }
        printf("la somme de Un \t %d est \t %d" ,n,Sum);
   }
    return 0;
}


