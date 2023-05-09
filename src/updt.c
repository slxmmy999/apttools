#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("\033[1;32mUpdating software catalog...\033[0m\n\n");
    system("sudo apt update");
    return 0;
}