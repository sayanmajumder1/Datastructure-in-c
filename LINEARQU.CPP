#include<stdio.h>
#include<conio.h>
int q[5],f=-1,r=-1;
void rear();
void front();
void display();


void main(){
int c;
char ch;
clrscr();
printf("\n 1. For Enter The Element");
printf("\n2. For Delet The Element");
printf("\n3.For Display The Element");

do{
printf("\nEnter Your Choice");
scanf("%d",&c);
switch(c){
case 1:
rear();
break;
case 2:
front();
break;
case 3:
display();
break;
default:
printf("\n Invalid");
}
printf("\n Do you want to continue y or n");
ch=getch();
}
while(ch=='y'||ch=='Y');
getch();
}
void rear(){
int e;
if(r==5-1){
printf("\n Queue is Full");

}
else
{
if(f==-1){
f=0;

}
printf("\n Insert Element In queue");
scanf("%d",&e);
r=r+1;
q[r]=e;
}
}
void front(){

if(f==-1){

printf("\n queue Is Empty");
}
else{
printf("\nDeleted Of %d", q[f]);
f=f+1;
}
}
void display(){

int i;
if(f==-1){

printf("\n queue Is Empty");
}
else{
printf("\n The Enter Elements Are");
for(i=f;i<=r;i++){
printf("\n%d",q[i]);

}
}
}