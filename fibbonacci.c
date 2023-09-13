#include <stdio.h>
#include <malloc.h>

int fibonacci(int i) {
    if(i<=1)
        return 1;
    return fibonacci(i-1) + fibonacci(i-2);
    }

int main(void) {
    int *buffer = NULL;
    int i = 2;

    buffer = (int*) malloc(i);

    while(i){
        buffer = (int*) realloc(buffer, fibonacci(i+1));
    }
}
