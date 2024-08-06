#include<stdio.h>
int main()
{
    int a[100], i, n, p;
    printf("Enter the range of Array: ");
    scanf("%d",&n);
    
    printf("\nEnter the elements of Array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("\nEnter the position for Inserting: ");
    scanf("%d",&p);
    
    if(p<0 || p>=n)
    {
        printf("\nInserting is impossible!");
    }
    else
    {
        for(i=n-1;i>=p;i--)
            a[i+1] = a[i];
        printf("\nEnter the element to Insert: ");
        scanf("%d",&a[p]);
        n++;
        
        printf("\nAfter Inserting: ");
        for(i=0;i<n;i++)
        printf("%d\t", a[i]);
    }
    return 0;
}