#include <stdio.h>
int main() {
    int ch;
    float a[2];  
    printf("Enter choice (1 for circle area, 2 for rectangle area): ");
    scanf("%d", &ch);
    switch(ch) {
        case 1:
            printf("Enter radius 'r': ");
            scanf("%f", &a[0]);
           
            printf("Area of circle = %.2f\n", 3.14159 * a[0] * a[0]);
            break;
        case 2:
            printf("Enter length 'l' and breadth 'b': ");
            scanf("%f %f", &a[0], &a[1]);
            printf("Area of rectangle = %.2f\n", a[0] * a[1]);
            break;
        default:
            printf("Invalid choice\n");
    }
    return 0;
}
