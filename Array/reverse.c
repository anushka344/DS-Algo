#include<stdio.h>
int main(){
int a[100];
int i,n,start,end,c;
scanf("%d",&n);
for(i=0;i<n;i++){
   scanf("%d",&a[i]);

}
start=0;end=n-1;
while(start<end){
c=a[start];
a[start]=a[end];
a[end]=c;
start++;end--;
}
for(i=0;i<n;i++){
   printf("%d ",a[i]);

}
return 0;

}
