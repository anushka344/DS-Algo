#include<stdio.h>
int main(){
int a[100];
int i,n,d,b,c;
scanf("%d",&n);
for(i=0;i<n;i++)
   scanf("%d",&a[i]);
int j=0;
for(i=0;i<n;i++){
    if(a[i]<0){
        c=a[i];
        a[i]=a[j];
        a[j]=c;
        j++;
        }
}
for(i=0;i<n;i++){
   printf("%d ",a[i]);

}
return 0;


}

