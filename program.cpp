#include "splashkit.h"

int main()
{
    open_window("My Drawing",1000,800);
    load_bitmap("deviled_eggs.png ","deviled_eggs.png"); 
    load_sound_effect("image.wav","image.wav");
    clear_screen(COLOR_WHITE);
    draw_bitmap("deviled_eggs.png",10,75);
    refresh_screen(60);
    play_sound_effect("image.wav");
    delay(5000);
    refresh_screen(60);
    delay(5000);
    return 0;
}