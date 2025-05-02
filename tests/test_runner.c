#include <stdio.h>

// Declare test functions from other files
void test_all_conversions();
void test_main_functionality();
void test_ui();

int main() {
    printf("Running all tests...\n");
    test_all_conversions();
    test_main_functionality();
    test_ui();
    printf("All tests passed!\n");
    return 0;
}