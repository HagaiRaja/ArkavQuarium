#include "oop.hpp"
#include <iostream>
#include <math.h>
#include <sstream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;

#define PI 3.14159265

const double speed = 50; // pixels per second
const double speed1 = 65;

double abs (double a) {
    if (a > 0) {
        return a;
    }
    else {
        return -a;
    }
}

int main( int argc, char* args[] )
{
    init();

    /* initialize random seed: */
    srand (time(NULL));

    // Menghitung FPS
    int frames_passed = 0;
    double fpc_start = time_since_start();
    std::string fps_text = "FPS: 0";

    // Posisi ikan
    double cy = SCREEN_HEIGHT / 2;
    double cx = SCREEN_WIDTH / 2;
    double dx = 0;
    double dy = 0;

    double iMove, iKeep, arahKejar;

    bool running = true;

    double prevtime = time_since_start();

    iKeep = ((double) (rand() % 1000))/(double) 200;
    iMove = ((double) (rand() % 360))/((double)180)* PI;
    while (running) {
        double now = time_since_start();
        double sec_since_last = now - prevtime;
        prevtime = now;

        handle_input();
        if (quit_pressed()) {
            running = false;
        }

        if (iKeep < 0) {
            iKeep = ((double) (rand() % 1000))/(double) 200;
            iMove = ((double) (rand() % 360))/((double)180)* PI;
        }
        else {
            iKeep -= sec_since_last; 
        } 
        if (((cx + speed*cos(iMove)*sec_since_last >= 0) && (cx + speed*cos(iMove)*sec_since_last) <= SCREEN_WIDTH)) {
            cx += speed*cos(iMove)*sec_since_last;    
        }
        else {
            iKeep = ((double) (rand() % 1000))/(double) 200;
            iMove = ((double) (rand() % 360))/((double)180)* PI;
        }

        if (((cy + speed*sin(iMove)*sec_since_last >= 0) && (cy + speed*sin(iMove)*sec_since_last) <= SCREEN_HEIGHT)) {
            cy += speed*sin(iMove)*sec_since_last; 
        }
        else {
            iKeep = ((double) (rand() % 1000))/(double) 200;
            iMove = ((double) (rand() % 360))/((double)180)* PI;
        }

        arahKejar = atan2(cy-dy,cx-dx);
        dx += speed1*cos(arahKejar)*sec_since_last;
        dy += speed1*sin(arahKejar)*sec_since_last;   
        
        // Gerakkan ikan selama tombol panah ditekan
        // Kecepatan dikalikan dengan perbedaan waktu supaya kecepatan ikan
        // konstan pada komputer yang berbeda.
        for (auto key : get_pressed_keys()) {
            switch (key) {
            case SDLK_UP:
                cy -= speed * sec_since_last;
                break;
            case SDLK_DOWN:
                cy += speed * sec_since_last;
                break;
            case SDLK_LEFT:
                cx -= speed * sec_since_last;
                break;
            case SDLK_RIGHT:
                cx += speed * sec_since_last;
                break;
            }
        }
        if (abs(cx-dx) < 5 && abs(cy-dy) < 5) {
            running= false;
        }

        // Proses masukan yang bersifat "tombol"
        for (auto key : get_tapped_keys()) {
            switch (key) {
            // r untuk reset
            case SDLK_r:
                cy = SCREEN_HEIGHT / 2;
                cx = SCREEN_WIDTH / 2;
                break;
            // x untuk keluar
            case SDLK_x:
                running = false;
                break;
            }
        }

        // Update FPS setiap detik
        frames_passed++;
        if (now - fpc_start > 1) {
            std::ostringstream strs;
            strs << "FPS: " ;
            strs << frames_passed/(now - fpc_start);
            fps_text = strs.str();;
            fpc_start = now;
            frames_passed = 0;
        }

        // Gambar ikan di posisi yang tepat.
        clear_screen();
        draw_text("Panah untuk bergerak, r untuk reset, x untuk keluar", 18, 10, 10, 0, 0, 0);
        draw_text(fps_text, 18, 10, 30, 0, 0, 0);
        draw_image("ikan.png", cx, cy);
        draw_image("ikan.png", dx, dy);
        update_screen();
    }

    close();

    return 0;
}
