#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if(argc == 1) {
        printf("\033[1;31merror: \033[0m");
        printf("no package provided. usage: inst <package>\n");
    } else {
        char cmd[1000] = "sudo apt install ";
        char space[] = " ";
        char upgr[700] = "\033[1;32m\nUpgrading package ";
        for(int x = 1; x < argc; x++) {
            strcat(upgr, argv[x]);
            strcat(upgr, space);

            strcat(cmd, argv[x]);
            strcat(cmd, space);
        }
        char end[100] = "...\033[0m\n\n";
        strcat(upgr, end);
        char y[] = "-y";
        strcat(cmd, y);

        printf("\033[1;32mUpdating software catalog...\033[0m\n\n");
        system("sudo apt update");

        printf("%s", upgr);
        system(cmd);

        printf("\033[1;32m\nRemoving unnecessary files...\033[0m\n\n");
        system("sudo apt autoremove -y");   

    }
    
    return 0;
}