#include <stdio.h>
#include <string.h>


int main() {
    char dataType[20];
    
    printf("Enter the data type (Integer, Long, Float, Double, Character): ");
    scanf("%s", dataType);
    
    if (strcmp(dataType, "Integer") == 0) {
        printf("Size of Integer: 4 bytes\n");
    } else if (strcmp(dataType, "Long") == 0) {
        printf("Size of Long: 8 bytes\n");
    } else if (strcmp(dataType, "Float") == 0) {
        printf("Size of Float: 4 bytes\n");
    } else if (strcmp(dataType, "Double") == 0) {
        printf("Size of Double: 8 bytes\n");
    } else if (strcmp(dataType, "Character") == 0) {
        printf("Size of Character: 1 byte\n");
    } else {
        printf("Unknown data type\n");
    }
    
    return 0;
}
