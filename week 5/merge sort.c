//Merge sort

#include<stdio.h>
int arr[40];
int merge(int arr[],int b,int d,int l)
{
    int arr1[20],arr2[20];

    int n1,n2,i,j,k;
    n1=d-b+1;
    n2=l-d;

    for(i=0; i<n1; i++)
        arr1[i]=arr[b+i];
    for(j=0; j<n2; j++)
        arr2[j]=arr[d+j+1];
        arr1[i]=2020;
    arr2[j]=2020;
    i=0;
    j=0;
    for(k=b; k<=l; k++)
    {
        if(arr1[i]<=arr2[j])
            arr[k]=arr1[i++];
        else
            arr[k]=arr2[j++];
    }
    return 0;
}

int merge_sort(int arr[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        merge_sort(arr,low,mid);
        merge_sort(arr,mid+1,high);

        merge(arr,low,mid,high);
    }
    return 0;
}
int main()
{
    int n,i;
printf("Enter the size of array:\n");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    merge_sort(arr,0,n-1);

    printf("Sorted array:");
    for(i=0; i<n; i++)
        printf("%d ", arr[i]);
  return 0;
}



/*worse Case: n*log(n)
Best Case: n*log(n)
Average Case: n*log(n))*/
