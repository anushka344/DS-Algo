//three variable
//we will count number of 0's 1's 2's
#include<stdio.h>
int main(){
int a[100];
int i,n;
int c0=0,c1=0,c2=0;
scanf("%d",&n);
for(i=0;i<n;i++)
   scanf("%d",&a[i]);

for(i=0;i<n;i++){
    if (a[i]==0)
        c0++;
    else if (a[i]==1)
        c1++;
    else
        c2++;
}
for (i=0;i<c0;i++)
    a[i]=0;
for (i=c0;i<c0+c1;i++)
    a[i]=1;
while(c2--)
    a[i++]=2;
for(i=0;i<n;i++)
   printf("%d ",a[i]);
}

