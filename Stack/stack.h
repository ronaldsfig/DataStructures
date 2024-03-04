#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#define MAX 100
struct data{
    int id;
    char label[30];
};

typedef struct stack Stack;

Stack* buildStack();
void destroyStack(Stack* current_stack);
int getTopStack(Stack* current_stack, struct data *current_data);
int insertStack(Stack* current_stack, struct data current_data);
int removeStack(Stack* current_stack);
int lengthStack(Stack* current_stack);
int isFullStack(Stack* current_stack);
int isEmptyStack(Stack* current_stack);
void printStack(Stack* current_stack);


#endif // STACK_H_INCLUDED
