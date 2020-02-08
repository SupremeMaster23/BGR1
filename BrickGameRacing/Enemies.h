#pragma once 
#ifndef ENEMIES_H
#define ENEMIES_H
#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
class Enemies {
public:
	int posx;
	int posy;
	bool live;
	int speed;
	ALLEGRO_BITMAP * enemigos;
};

#endif 

