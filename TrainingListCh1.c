#include <stdio.h>
#include <stdlib.h>

struct Nodes{
    int content;                //Data of the Nodes ...
    struct Nodes *nextptr;         //Adress of the next Node ...
}*nodeptr;

void createNodeList(int numb);        //Function to create the List ...
void displayList();                   //Function to display the List ...

int main(){
  int numb;
		printf("\n\n Linked List : To create and display Singly Linked List :\n");
		printf("-------------------------------------------------------------\n");

    printf("\n\n Input the number of nodes : ");
    scanf("%d",&numb);
    createNodeList(numb);
    printf("\n Data entered in the list : \n");
    displayList();

    system("PAUSE");
    return 0;
}

/*--------------------------------------------------------------------------*/

void createNodeList(int numb){
  struct Nodes *FnNodes, *temp;    // I will use them after Input the Node number 1 ...
  int num,num2, i;
  nodeptr = (struct Nodes*)malloc(sizeof(struct Nodes));  // Memory Allocation ...
  if(nodeptr = NULL){   // Check whether the nodeptr is NULL and if so no Memory Allocation ...
    printf(" Memory can not be Allocated. ");
  }else{
    // reads data for the first node ~ONLY~ through Keyboard ...
    printf(" Input data for Node 1 : ");
    scanf("%d",&num);
    printf("\n      Test   ---------");
    nodeptr->content = num;
    printf("\n      Test   ---------");
    //nodeptr->nextptr = NULL;  // Links the address field to NULL ...
    printf("\n      Test   ---------");
    temp = nodeptr;
    // Now we will Creating n "numb" nodes and adding to linked list ...
  }
    for(i=2; i<=numb; i++){
      FnNodes = (struct Nodes*)malloc(sizeof(struct Nodes));
      if(FnNodes == NULL){
        printf(" Memory can not be Allocated.");
        break;
      }else{
        printf(" Input data for node %d : ",i);
        scanf("%d",&num2);
        //FnNodes->content = num2;
        //FnNodes->nextptr = NULL;

        //temp->nextptr = FnNodes;
        //temp = temp->nextptr;
      }
    }
}

/*--------------------------------------------------------------------------*/

void displayList(){
  struct Nodes *temp;
  if(nodeptr == NULL){
    printf(" List is empty.\n\n");
  }else{
    temp = nodeptr;
    while(temp != NULL){
      printf(" Data  = %d\n",temp->content);  // Prints the data of current Node ..
      temp = temp->nextptr;    // Advances the position of current Node ...
    }
  }
}
