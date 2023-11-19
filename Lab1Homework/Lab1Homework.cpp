#include <iostream>
#include "a.h"
#include "b.h"

void test() {
    printf("This is the test function n");
}



void test_from_b() {
    printf("This is the test function from b.h\n");
    test();  // Using test() from a.h
}

void test();

int main() {
    printf("Main program\n");

    test_from_b();  // Using test_from_b() from b.h

    return 0;
}