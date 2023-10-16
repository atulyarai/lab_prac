#include <stdio.h>
int main()
{
    int t,n;
    printf("array size : ");
    scanf("%d",&t);
    int array[t];
    printf("element to be found : ");
    scanf("%d",&n);
    for (int i=0;i<t;i++)
    {
        scanf("%d",&array[i]);        
    }
    int k=t/2;
    int mid,high=t-1,low=0;
    while (k!=0)
    {
        k--;
        mid=(low+high)/2;
        if (array[mid]==n)
        {
            printf("found");
            break;
        }
        else if (array[mid]<n)
        {
            low++;
        }
        else if (array[mid]>n)
        {
            high--;
        }
        if (k==0)
    {
        printf("Not found");
    }

    }
    

}