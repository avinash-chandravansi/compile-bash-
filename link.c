#include <stdio.h>  
#include <stdlib.h>
#include <string.h>


 struct node{
     int data;
     struct node *next;   
 };

 struct node *head , *tail = NULL;

 void add(char data)
 {
     struct node *newnode  = (struct node*)malloc(sizeof(struct node));
     newnode->data = data;
     newnode->next = NULL;

     if(head==NULL)
     {
         head = newnode;
         tail = newnode;
     } 
     else
     {
         tail->next = newnode;
         tail = newnode;
     }
     }
     
 

void reverseprint(struct node *current) {  
  
    if(head == NULL) {  
        printf("List is empty\n");  
        return;  
    }  
    else{  
       
        if(current->next == NULL) {  
            printf("%c", current->data);  
            return;  
        }  
      
        reverseprint(current->next);  
        printf("%c", current->data);  

       
    }  
}  
      
 

int main(int argc, char *argv[])
{
    if(argc==2)
    {
        
   
   int len = strlen(argv[1]);
   for(int i=0;i<len;i++)
   {
       add(argv[1][i]);
   }
   printf("You have entered the string : %s \n ",argv[1]);
   printf("The reverse of string : ");reverseprint(head);
   printf("\n");
    }
    else {
        printf(" Please enter only one argument or no argument supplied \n");
  printf(" Please enter only one argument or no argument supplied \n");
    printf(" Please enter only one argument or no argument supplied \n");
    }
    
    return 0;
    
} 