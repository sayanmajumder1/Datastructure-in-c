#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#include<conio.h>
// create The Linked List
struct node
{
int data;
struct  node *link;

};
struct node *start=NULL,*new1, *temp, *p, *px;

//create  The Linked List 
void create(){
int x;
char my;
printf("\n Enter The Element");
scanf("%d",&x);
start=(struct node*)(malloc(sizeof(struct node)));
start->data=x;
start->link=NULL;
temp=start;
printf("\n Do You Want to continue y or n--");
my=getch();
while(my=='y'|| my=='Y'){
    printf("\n Enter A New Node");
    scanf("%d",&x);
    new1=(struct node*)(malloc(sizeof(struct node)));
    new1->data=x;
    new1->link=NULL;
    temp->link=new1;

    temp=temp->link;
    printf("\n Do You want To Continue y or n");
    my=getch();


}
}


// insert at last
void insertlast(){

int x;
if(start==NULL){
    printf("\n The Link Is Not Found");
}
else{



printf("\n Insert The Element For Last Insert");
scanf("%d",&x);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=x;
new1->link=NULL;
temp=start;
while(temp->link!=NULL){
    temp=temp->link;

}
temp->link=new1;

}

}




// insert at first
void insertfrist(){

int x;
if(start==NULL){
    printf("\n The Link Is Not Found");
}
else{



printf("\n Insert The Element For First  Insert");
scanf("%d",&x);
new1=(struct node*)(malloc(sizeof(struct node)));
new1->data=x;
new1->link=NULL;
new1->link=start;
start=new1;

}

}


// code For Display 

void display()
{
if(start==NULL){
    printf("\n  Nothing For Dispaly");
}
else{
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\t", temp->data);
    temp=temp->link;
}
}
}





//insert A Node After Any Node

void insertany(int x, int key){
    new1=(struct node*)(malloc (sizeof (struct node)));
    new1->data=x;
    new1->link=NULL;
    p=start;
   
if(start==NULL){
start =new1;
}
p=start;
while(p!=NULL && p->data!=key){
    p=p->link;
}
if(p==NULL){
    printf("\n Node With Given Data Not Found");
}
else{
    new1->link=p->link;
    p->link=new1;
}





}





// for count The Node OF Linked List//
void count(){



int count=0;
temp=start;
while(temp!=NULL){
    count++;
    temp=temp->link;

}
printf("\n Total Node iS %d",count);




}
void deletelast(){

if(start==NULL){


printf("\n The Link not Found ");

}
else{



temp=start;
while(temp->link!=NULL){
    px=temp;
    temp=temp->link;

}
px->link=NULL;
printf("\n The Deleted Elemnt Is %d", temp->data);
free(temp);
}


}
void deletef(){

if(start==NULL)
{
printf("\n Link not Found");
}
else{





    temp=start;
    start=start->link;
    printf("\n Deleted Elementb Is %d", temp->data);
    free(temp);
}



}

void main(){

int c,x, key;
char y;
printf("_________\n You Are Enter In Main Manue________");
do{
printf("\n1.For Create A list");
printf("\n2.For Dispaly");
printf("\n3.For count");
printf("\n4.For Insert Any Node");
printf("\n5.For Insert Any Node in First");
printf("\n6.For Insert Any Node in Last");
printf("\n7.Delete From Last");
printf("\n8.Delete For first");
printf("\n Enter Your Choice--");

scanf("%d",&c);





switch(c){
      case 1:
      create();
      break;
      case 2:
      display();
      break;
      case 3:
      count();
      break;
      case 4:
      printf("\n Enter The Data Of The Give New Node:-");
      scanf("%d",&x);
      printf("\n Enter The data Of The Particular Node Which You Want To insert After:- ");
      scanf("%d",&key);
        insertany( x,  key);
      break;
      case 5:
      insertfrist();
      break;
      case 6:
      insertlast();
      break;
      case 7:
      deletelast();
      break;
      case 8:
      deletef();
      break;
      default:
      printf("\n Invalid");
}
printf("\n Do You Want To  Continue y or n");
y=getch();
}

while(y=='y'|| y=='Y');
getch();

    
}