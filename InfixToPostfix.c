#include <stdio.h>
#include <stdlib.h> 
#define MAX 8
int dequeue[MAX];
int rear = - 1;
int front = - 1;
void push_DQ(){
    if ((rear+1)%MAX == front )
        printf("\nQueue Overflow! \n");
    else{ 
        if (front == - 1 || front == 0)
            rear = front = MAX-1;
        else
            front--;
        printf("\nEnter the element : ");
        scanf("%d", &dequeue[front]);
    }
    
}
void pop_DQ(){
    if (front == - 1)
        printf("\nQueue Underflow! \n");
    else{
        printf("\nDeleted from dequeue is : %d\n", dequeue[front]);
        if (front == rear)
            front=rear=-1;
        else
            front=(front+1)%MAX;
    }
}
void inject(){
    if (front == (rear+1)%MAX)
        printf("\nQueue Overflow! \n");
    else{ 
        if (front == - 1)
            front = 0;
        rear=(rear+1)%MAX;
        printf("\nEnter the element : ");
        scanf("%d", &dequeue[rear]);
    }
}
void eject(){
    if (front == - 1)
        printf("\nQueue Underflow! \n");
    else{
        printf("\nDeleted from dequeue is : %d\n", dequeue[rear]);
        if (front == rear)
            front=rear=-1;
        else if (rear== 0)
            rear= MAX-1;
        else
            rear--;
    }
}    
void display(){
    if (front == - 1)
        printf("\nQueue is empty! \n");
    else{
        printf("\nQueue is : \n");
        for (int i = front; i != rear; i=(i+1)%MAX)
            printf("%d ", dequeue[i]);
        printf("%d ", dequeue[rear]);    
    }
}
void main(){
    int ch;
    printf("\t\tDEQUEUE MENU\n\t-------------------------\n");
    while (1){
        printf("\n1.Insert element from front\n2.Delete element from front\n3.Insert elements from rear\n4.Delete from rear\n5.Display elements\n0.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&ch);
        switch (ch){
            case 1:push_DQ();
            break;
            case 2:pop_DQ();
            break;
            case 3:inject();
            break;
            case 4:eject();
            break;
            case 5:display();
            break;
            case 0:exit(1);
            default:
            printf("\nWrong choice \n");
        }
    }
}