//Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.//
#include <stdio.h>
typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;
void printStatusMessage(Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out.\n");
            break;
        default:
            printf("Unknown status.\n");
            break;
    }
}
int main() {
    printStatusMessage(SUCCESS);
    printStatusMessage(FAILURE);
    printStatusMessage(TIMEOUT);
    return 0;
}