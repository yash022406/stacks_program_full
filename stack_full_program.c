#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int * arr;
};
struct stack * s= NULL;
void push(){
    
    int data;
    printf("Enter the data: ");
    scanf("%d",&data);
    s->top++;
    s->arr[s->top]=data;
}
void display(){
    int i;
    for(i=0;i<=s->top;i++){
        printf("%d\t",s->arr[i]);
    }
    printf("\n");
}
void pop(){
    s->top--;
}
void ifFull(){
    if(s->top==s->size-1){
        printf("the stack is full.\n");
    }
}
void ifEmpty(){
    if(s->top==-1){
        printf("the stack is empty.\n");
    }
}
int main(){
    s = (struct stack *)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    // menu program
    int n;
    while(n!=4){
        printf("1.Push Data\n2.Display\n3.Pop data\n4.Check ifEmpty\n5.Check ifFull\n6.Exit\n");
        scanf("%d",&n);
        if(n==1){
            push();
        }
        else if(n==2){
            display();
        }
        else if(n==3){
            pop();
        }
        else if(n==4){
            ifFull();
        }
    }
}