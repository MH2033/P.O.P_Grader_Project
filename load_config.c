#include <stdio.h>

extern int x, y, time, dots;
extern int obstac[100];

void load_config(const char config[]) {
    int i, j = 0, lcount = 0;
    x = 0;
    y = 0;
    time = 0;
    dots = 0;
    for(i = 0; config[i] != '\0'; i++) {
        if(config[i] == '\n') {
            lcount++;
            continue;
        }
        if(lcount == 0) {
            while (config[i] != ' ') {
                x = x * 10 + (config[i] - '0');
                i++;
            }
            i++;
            while (config[i] != '\n') {
                y = y * 10 + (config[i] - '0');
                i++;
            }
            i--;
        }
        else if(lcount == 1) {
            while (config[i] != '\n') {
                time = time * 10 + (config[i] - '0');
                i++;
            }
            i--;
        }
        else if(lcount == 2){
            while (config[i] != '\n') {
                dots = dots * 10 + (config[i] - '0');
                i++;
            }
            i--;
        }

    }
}