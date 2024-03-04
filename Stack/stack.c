#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct stack{
    int quantity_stack;
    struct data data_stack[MAX];
};


Stack* buildStack(){
    Stack *current_stack;
    current_stack = (Stack*) malloc(sizeof(struct stack));
    if(current_stack != NULL)
        current_stack->quantity_stack = 0;
    return current_stack;
}


void destroyStack(Stack* current_stack){
    free(current_stack);
}


int getTopStack(Stack* current_stack, struct data *current_data){
    if(current_stack == NULL || current_stack->quantity_stack == 0)
        return 0;
    *current_data = current_stack->data_stack[current_stack->quantity_stack-1];
    return 1;
}


int insertStack(Stack* current_stack, struct data current_data){
    if(current_stack == NULL)
        return 0;
    if(current_stack->quantity_stack == MAX)
        return 0;
    current_stack->data_stack[current_stack->quantity_stack] = current_data;
    current_stack->quantity_stack++;
    return 1;
}


int removeStack(Stack* current_stack){
    if(current_stack == NULL || current_stack->quantity_stack == 0)
        return 0;
    current_stack->quantity_stack--;
    return 1;
}


int lengthStack(Stack* current_stack){
    if(current_stack == NULL)
        return -1;
    else
        return current_stack->quantity_stack;
}


int isFullStack(Stack* current_stack){
    if(current_stack == NULL)
        return -1;
    return (current_stack->quantity_stack == MAX);
}


int isEmptyStack(Stack* current_stack){
    if(current_stack == NULL)
        return -1;
    return (current_stack->quantity_stack == 0);
}


void printStack(Stack* current_stack){
    if(current_stack == NULL)
        return;
    int i;
    for(i=current_stack->quantity_stack-1; i >=0; i--){
        printf("ID: %d\n",current_stack->data_stack[i].id);
        printf("Label: %s\n",current_stack->data_stack[i].label);
        printf("-------------------------------\n");
    }
}
