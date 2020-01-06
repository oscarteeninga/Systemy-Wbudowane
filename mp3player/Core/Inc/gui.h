#ifndef GUI_H_
#define GUI_H_

void lcd_start(void);
void draw_background(void);
int initialize_touchscreen(void);
Mp3_Player_State check_touchscreen();
void touchscreen_loop_init();
void refresh_screen(const char *info_text);
void update_progress_bar(double);
void update_volume_bar(int);
void update_actual_time(int);
void show_full_time(int);

#endif
