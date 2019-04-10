//
// Created by MH on 3/17/2019.
//

#ifndef P_O_P_G_PROJECT_PROTOTYPES_H
#define P_O_P_G_PROJECT_PROTOTYPES_H

void read_from_file(char file_data[], char file_name[]);
void load_config(const char config[]);
void delay(int x);
int welcome_screen(void);
void game_map_making(void);
void rand1(int n,int ran[][100]);//baray aval bazi k bayad rand ziadi bgirim
void mode_1(void);
void mode_2(void);
void print_map(void);
int move_up(void);
int move_down(void);
int move_right(void);
int move_left(void);

#endif //P_O_P_G_PROJECT_PROTOTYPES_H
