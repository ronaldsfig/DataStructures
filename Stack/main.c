#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

int main(){
    struct data temp_data[4] = {{1,"First"},
                                {2,"Second"},
                                {3,"Third"},
                                {4,"Fourth"}};

    Stack* current_stack = buildStack();
    printf("Length: %d\n\n\n\n",lengthStack(current_stack));
    int i;
    for(i=0; i < 4; i++)
        insertStack(current_stack,temp_data[i]);

    printStack(current_stack);
    printf("Length: %d\n\n\n\n",lengthStack(current_stack));

    for(i=0; i < 4; i++)
        removeStack(current_stack);
    printStack(current_stack);
    printf("Length: %d\n\n\n\n",lengthStack(current_stack));

    for(i=0; i < 4; i++)
        insertStack(current_stack,temp_data[i]);

    printStack(current_stack);
    printf("Length: %d\n\n\n\n",lengthStack(current_stack));

    destroyStack(current_stack);
    system("pause");
    return 0;
}
