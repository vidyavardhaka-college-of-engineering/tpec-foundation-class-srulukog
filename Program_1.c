#include <stdio.h>
int check_character(char ch) {
if (ch >= 'A' && ch <= 'Z') {
return 1;
} else if (ch >= 'a' && ch <= 'z') {
return 0;
} else {
return -1;
}
}
int main() {
char input_char;
printf("Enter a character: ");
scanf("%c", &input_char);
int result = check_character(input_char);
if (result == 1) {
printf("Output: 1\n");
} else if (result == 0) {
printf("Output: 0\n");
} else {
printf("Output: -1\n");
}
return 0;
