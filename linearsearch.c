#include<stdio.h>
void linearsearch(int *a, int n, int key )
{

int i;
for(i=0;i<n&& a[i]!=key;i++);
if(i==n){
    printf("\n Key Is NOt Found ");
}
else{

printf("\n Key Is Found At %d Location ", i+1);

}

}
int main(){
int n , key , i;
printf("\n Enter The Number Of The Elements ");
scanf("%d", &n );
int a[n];
printf("\n Enter The Elements :\n ");
for(i=0; i<n; i++){
    scanf("%d", &a[i]);
}
printf("\n Enter The Particular Key For Search:--");
scanf("%d", &key);
 linearsearch(a, n , key);
 return 0;   
}