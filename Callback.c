#include <stdio.h>

// This is the callback function
void sayHello() {
    printf("Hello, student! You just called me back!\n");
}

// This function takes another function as input
void studentWork(void (*callbackFunc)()) {
    printf("Student is doing homework...\n");
    // After finishing, call the teacher back
    callbackFunc();
}

int main() {
    // Pass the teacher's phone (function address)
    studentWork(sayHello);
    return 0;
}
