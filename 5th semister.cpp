# include<stdio.h>
int main()
{
    int size,i,toSearch,found;
    int A[100];
    printf("Enter size of array:");
    scanf("%d",& size);
    printf("Enter array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&A[i] );
    }
    printf("Enter elements to search:");
    scanf("%d",& toSearch );
    found=0;
    for(i=0;i<size;i++)
    {
        if(A[i]==toSearch)
        {
            found=1;
            break;
        }
    }
    if(found==1)
    {
        printf("\n%d is found position %d", toSearch,i+1);
    }
    else
    {
        printf("\n %d is not found",toSearch);
    }
    return 0;
}
