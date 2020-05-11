#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char * argv[]) {
int x, value;
Node * head = NULL;
Node * tail = NULL;
do {
x = 0;
printf("Enter the number of the option you want:\n");
printf("\t1. Insert Head\n");
printf("\t2. Insert tail\n");
printf("\t3. Delete a Node\n");
printf("\t4. Delete all\n");
printf("\t5. Print List\n");
printf("\t6. Close Program\n");
scanf("%d",&x);
if(x < 1 || x > 6) {
x = 0;
}
switch(x) {
case 0 :
printf("Invalid input\n");
break;

case 1 :
printf("Enter an integer: ");
scanf("%d",&value);
head = List_insert(head, value);
break;

case 2 :
printf("Enter an integer: ");
scanf("%d",&value);
tail = List_insert_last(head, value);
break;

case 3 :
printf("Which value would you like to delete? ");
scanf("%d",&value);
head = List_delete(head, value);
break;
  
case 4 :
printf("Deleting nodes\n");
List_destroy(head);
break;

case 5 :
printf("List:\n");
List_print(head);
break;

case 6 :
printf("Exiting\n");
break;
}
}while(x != 6);
return 0;}

