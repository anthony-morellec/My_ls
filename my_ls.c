#include <stdlib.h>
#include <stdio.h>

int main(int ac, char** av) {
    
    if (ac > 1) {
        if (av[1][0] == '-' && av[1][2] == 0) {
            switch (av[1][1]) {
                case 'a':
                    break;
                case 't':
                    break;
                default:
                    printf("invalid option");
                    break;
            }
        }
    }

    return 0;
}