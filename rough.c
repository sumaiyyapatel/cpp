
#include <stdio.h>

int main() {
    int n,i;
    printf("enter n");
    scanf("%d",&n);
    int a[n];
      printf("enter values");
   for(i=0;i<n;i++)
   {
   scanf("%d",&a[i]);}
   printf("\n all the elemants of the array are\n\n");
   for(i=0;i<n;i++)
   {printf("%3d",a[i]);
   }
    return 0;
}