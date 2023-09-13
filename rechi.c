// #include <stdio.h>
// int main(void)
// {
//     printf("Hi, King Rechi!\n");
// }

#include <stdio.h>

int main() {
    int num;
    printf("Enter an integer: ");
    
    // Read an integer from the user
    if (scanf("%d", &num) == 1) {
        printf("You entered: %d\n", num);
    } else {
        printf("Invalid input\n");
    }
    
    return 0;
}
