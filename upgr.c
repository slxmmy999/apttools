#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc == 1) {
        printf("\033[1;32mUpdating software catalog...\033[0m\n\n");
        system("sudo apt update");

        printf("\033[1;32m\nUpgrading system software...\033[0m\n\n");
        system("sudo apt upgrade -y");

        printf("\033[1;32m\nRemoving unnecessary files...\033[0m\n\n");
        system("sudo apt autoremove -y");

    }
    if(argc == 2) {
        char cmd[100] = "sudo apt upgrade ";
        strcat(cmd, argv[1]);
        char con[100] = " -y";
        strcat(cmd, con);

        char upgr[100] = "\033[1;32m\nUpgrading package ";
        strcat(upgr, argv[1]);
        char end[100] = "...\033[0m\n\n";
        strcat(upgr, end);

        printf("\033[1;32m\nUpgrading system software...\033[0m\n\n");
        system("sudo apt update");

        printf("%s", upgr);
        system(cmd);

        printf("\033[1;32m\nRemoving unnecessary files...\033[0m\n\n");
        system("sudo apt autoremove -y");      

    }
    return 0;
}