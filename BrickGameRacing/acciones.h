#pragma once
#ifndef ACCIONES_H
#define ACCIONES_H
#include<allegro5/allegro.h>
#include<allegro5/keyboard.h>
#include <allegro5/allegro_image.h>
#include "interfaz.h"
#include "Enemies.h"

class acciones {
public:
	bool done1 = false;
	bool done2 = false;
	int playerx = 200;
	int playery = 475;
	ALLEGRO_EVENT_QUEUE* eventQueue;
	ALLEGRO_EVENT_QUEUE* eventQueue2;
	ALLEGRO_EVENT events;
	ALLEGRO_KEYBOARD_STATE keyState;
	ALLEGRO_TIMER* timer = NULL;
	Enemies  carroE[3];
	interfaz i;
	


	acciones();
	void install2();
	void accionRating();
	void accionPrincipal();
	void accionJugador();
	void accionRegreso1();
	void initEnemigos();
	void startEnemigos();
	void drawEnemigos();
	void updateEnemigos();


};
#endif
