#include<stdio.h>
int main()
{
    int n;
    printf("please enter the size of array: ");
    scanf("%i",&n);
    int a[n],b;
    for (int i=1;i<=n;i++)
    {
        printf("please enter the no. ");
        scanf("%i",&a[i]);
    }
    printf("please enter the no to be searched : ");
    scanf("%i",&b);
    int first=0,mid;
    int last=n;
    mid = (first + last)/2;
    while (first<=last)
    {
        if (a[mid]==b)
        {
            printf("the number found at %i.",mid-1);
            break;
        }
        else if (b>a[mid])
        {
            first=mid+1;
        }
        else if (b<a[mid])
        {
            last=mid-1;
        }
        mid=(first+last)/2;
    }
    
    return 0;
}