#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("Enter the A  value\n");
    scanf("%d",&a);
    printf("Enter the B value\n");
    scanf("%d",&b);
    printf("Enter the C value\n");
    scanf("%d",&c);
    printf("Enter the D value\n");
    scanf("%d",&d);
    printf("Enter the E value\n");
    scanf("%d",&e);


    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
            {
                if(a>e)
                {
                    printf("A is big");
                }
                else
                {
                    printf("e is big");
                }
            }
            else
            {
              printf("d is big ");
            }
        }
        else
        {
            printf("c is big");
        }
    }
    else 
    {
     if(b>c)
        {
         if(b>d)
            {
              if(b>e)
                {
                    printf("b is big");
                }
                else
                {
                    printf("e is big");
                }
            }
            else
             {
                printf("d is big");
            }
        }
    else{
            if(c>d)
              {
                if(c>e)
                {
                    printf("c is big");
                }
                else{
                    printf("e is big");
                }
              }
            else
              {
                if(d>e)
                {
                    printf("d is big");

                }
                else{
                    printf("e is big");
                }
            }

        }
}
}