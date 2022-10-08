#include<stdio.h>
int a[10], n,i;
void linear(int a[]);
void binary(int a[]);
void main()
{
  char c;
  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  for(i=0;i<n;i++)
  {
    printf("Enter element: ");
    scanf("%d",&a[i]);
  }
  printf("Given Array: [");
  for(i=0;i<n;i++)
  {
    if (i!=(n-1))
      printf(" %d,",a[i]);
    else
      printf("%d]",a[i]);
  }
  do
  {
    int op;
    printf("\n1.\tLinear Search\n2.\tBinary Search\n3.\tExit\n");
    printf("Enter your option: ");
    scanf("%d",&op);
    switch(op)
    {
      case 1:
        linear(a);
        break;
      case 2:
        binary(a);
        break;
      case 3:
        break;
      default:
        printf("Invalid choice\n");
    }
    printf("Do you want to continue?(Y/N): ");
    scanf(" %c",&c);
  }while((c=='Y') || (c=='y'));
}

void linear(int a[])
{
  int e, flag=-1;
  printf("Enter the value to be searched: ");
  scanf("%d",&e);
  for(i=0;i<n;i++)
  {
    if(a[i]==e)
      {
      printf("The position of %d is at %d\n",e,i+1);
      flag=0;
      break;
      }
  }
  if (flag==-1)
    printf("The value has not been found in given array!!!\n");
}
void binary(int a[])
{
  int beg=0,end=n-1,loc=-1,mid,temp=0,i=1,j=0,e;
  printf("Enter the value to be searched: ");
  scanf("%d",&e);
  for(i=1;i<n;i++)
 {
  for(j=0;j<n-i;j++)
  {
   if(a[j]>a[j+1])
   {
     temp=a[j];
     a[j]=a[j+1];
     a[j+1]=temp;
   }
  }
 }
 printf("Sorted Array: [");
  for(i=0;i<n;i++)
  {
    if (i!=(n-1))
      printf(" %d,",a[i]);
    else
      printf("%d]",a[i]);
  }
 printf("\n");
while(beg<=end)
{
  mid=(beg+end)/2;
  if(a[mid]==e)
  {
    loc=mid;
    break;
  }
  else if(e<a[mid])
   end=mid-1;
  else
   beg=mid+1;
}
if(loc==-1)
 printf("the element is not found\n");
else
 printf("the element is found at %d\n",mid+1);
}
/* Output
Enter number of elements: 5
Enter element: 55
Enter element: 33
Enter element: 11
Enter element: 44
Enter element: 22
Given Array: [ 55, 33, 11, 44,22]
1.      Linear Search
2.      Binary Search
3.      Exit
Enter your option: 1
Enter the value to be searched: 33
The position of 33 is at 2
Do you want to continue?(Y/N): y

1.      Linear Search
2.      Binary Search
3.      Exit
Enter your option: 2
Enter the value to be searched: 33
Sorted Array: [ 11, 22, 33, 44,55]
the element is found at 3
Do you want to continue?(Y/N): y

1.      Linear Search
2.      Binary Search
3.      Exit
Enter your option: 2
Enter the value to be searched: 44
Sorted Array: [ 11, 22, 33, 44,55]
the element is found at 4
Do you want to continue?(Y/N): n
/*
