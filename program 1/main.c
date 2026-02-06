 // determination of quadratic equation
#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
   float a,b,c ;
   float d,root1,root2,imgprt,realprt;
   printf("enter the numbers=\n");
   scanf("%f%f%f",&a,&b,&c);

   d=b*b-4*a*c ;

    if(d>0)
    {
    root1=-b +sqrt(d)/(2*a);
    root2= -b-sqrt(d)/(2*a);
    printf("roots are real and unequal",root1,root2);


    }
    else if (d==0)
    {
    root1=root2= -b/(2*a);
    printf("roots are real and equal\n");
    printf ("root1=root2\n",root1,root2);
    }
    else
    {
    realprt=-b/(2*a);
    imgprt= sqrt(-d)/(2*a);
    printf("the roots are imaginary %.2f + %.2fi\n",realprt,imgprt);
    printf("the roots are imaginary %.2f- %.2fi\n",realprt,imgprt);
    }
    return 0;
}
