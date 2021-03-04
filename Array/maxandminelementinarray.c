#include<stdio.h>
int main(){
int a[100];
int i,n,maxi,mini;
scanf("%d",&n);
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
maxi=a[0];
mini=a[0];
for (i=1;i<n;i++){
    if (maxi<a[i])
        maxi=a[i];
    if (a[i]<mini)
        mini=a[i];

}
printf("max: %d",maxi);
printf("min: %d",mini);
}
