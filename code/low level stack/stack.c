#include<stdlib.h>
#include "stack.h"

void stack_free(stack_t *stack) {
    if(stack == NULL) return;
    if(stack->data != NULL) {
        free(stack->data);
    }
    free(stack);
}

void *stack_pop(stack_t *stack) {
    if(stack->count == 0) {
        return; // stack is empty
    }

    stack->count -= 1;

    return stack->data[stack->count];
}

void stack_push(stack_t *stack, void *obj) {
    if(stack->count == stack->capacity) {
        stack->capacity *= 2;
        stack->data = realloc(stack->data, sizeof(void *) * stack->capcity);

        if(stack->data == NULL) {
            return;
        }
    }

    stack->data[stack->count] = obj;
    stack->count += 1;
}

stack_t *stack_new(size_t capacity) {
    stack_t *stack = (stack_t *) malloc(sizeof(stack_t));
    if(stack == NULL) {
        return NULL; // Memory allocation failed
    }

    stack->count = 0;
    stack->capacity = capacity;
    stack->data = malloc(sizeof(void *) * capacity);
    if(stack->data == NULL) {
        free(stack);
        return NULL; // Memory allocation failed
    }

    return stack;
}