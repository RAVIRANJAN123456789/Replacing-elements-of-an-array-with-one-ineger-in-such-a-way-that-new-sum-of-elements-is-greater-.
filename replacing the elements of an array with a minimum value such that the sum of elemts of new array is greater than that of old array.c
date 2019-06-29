#include<stdio.h>
int min()
{
    int n,i,x=0,sumarr=0,sum=0,arr[10];
    printf("\n Enter the number of elements to be entered \n");
    scanf("%d",&n);
    if(n>=1 && n<=100000)
    {printf("\n Enter the elements in the array \n ");
     for(i=0;i<n;i++)
      {
        scanf("%d",&arr[i]);
        {
            if(arr[i]<1000)
            {
                sumarr=sumarr+arr[i];
            }
            else
            {
                printf("\n wrong input and exit status is: \n");
                exit(0);
                break;
            }

        }

       }
    }
    else
    {
        printf("\n wrong input \n");
    }
    while(n*x<sumarr)
    {
       x++;
    }
    printf("\n ******************************** \n");
    for(i=0;i<n;i++)
    {
        arr[i]=x;
        printf("%d\n",arr[i]);
    }

}
int main()
{
    min();
    return 0;
}

