#include<iostream>
using namespace std;

struct Node{
   int data;
   Node *link;
 };
Node *head=NULL;
void retrive();
void insert(int);
void search(int);
void delet(int);

int main(){
int rollnum,dec;
char des_whil,des_swi;
do{
cout<<"Enter your specified roll number:  ";
cin>>rollnum;
cout<<"what you want\n1)Insert\n2)search\n3)Delete"<<endl;
cin>>dec;
switch (dec)
{
case 1:
   insert(rollnum);
  break;
  case 2:
     search(rollnum);
  break; 
  case 3:
    delet(rollnum);
  break;
default:
cout<<"Please chose right option"<<endl;
  break;
}
cout<<"Are you want to retrive(y or n): ";
   cin>>des_swi;
   if(des_swi=='y'){
    retrive();
   }
cout<<"Are you want to continue this process(y or n) :";
cin>>des_whil;
}while (des_whil=='y');
return 0;  
}

void retrive(){
  Node * retrve;
  retrve=head;
  while(retrve->link==NULL){
  if(head==NULL){
    cout<<"You have no data"<<endl;
    break;
  }
  else{
      cout<<"Roll no: "<<retrve->data<<endl;
      retrve= retrve->link;
  }
  }
}

void insert(int roll){
   Node *newnode;
   newnode=new Node;
   newnode->data=roll;
   newnode->link=head;
   head=newnode;
}

void search(int roll){
  Node *searh;
   int index=0;
  searh=head;
  while(searh->link==NULL){
  if(head==NULL){
    cout<<"You have no data to search"<<endl;
    break;
  }
  else{
     if(searh->data==roll){
        cout<<"Your data is at index: "<<index<<endl;
     }
      searh= searh->link;
      index++;
  }
  }
}

void delet(int roll){
   Node *currentNode;
   Node *lastNode;
   currentNode=head;
   lastNode=head;
   if(head==NULL){
     cout<<"You have Alredy no roll number"<<endl;
   }
   else{
      while(1){
       if(currentNode->data==roll){
            if(currentNode==head){
              head=currentNode->link;
            }
            lastNode=currentNode->link;
            cout<<"Roll no: "<<currentNode->data<<" is deleted"<<endl;
            delete currentNode;
            break;
       }
       lastNode=currentNode;
      currentNode=currentNode->link;
      if(currentNode->link==NULL)
      break; 
   }
}
}