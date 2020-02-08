#pragma once
#ifndef INTERFAZ_H
#define INTERFAZ_H
#include<allegro5/allegro.h>
#include<allegro5/allegro_font.h>
#include<allegro5/allegro_ttf.h>
#include<allegro5/allegro_image.h>
#include <iostream>
//#include <allegro5/keyboard.h>
//#include<string>
using namespace std;

class interfaz {
public:
	int cont = 0;
	ALLEGRO_DISPLAY* display;
	ALLEGRO_FONT* font ;
	ALLEGRO_FONT* font0 ;
	ALLEGRO_FONT* font1 ;
	ALLEGRO_FONT* font2 ;
	ALLEGRO_FONT* font3 ;
	ALLEGRO_FONT* font4;
	ALLEGRO_FONT* font5;
	ALLEGRO_FONT* font6;
	ALLEGRO_FONT* font7;
	ALLEGRO_BITMAP* image;
	ALLEGRO_BITMAP* image2;
	ALLEGRO_BITMAP* image3;
	ALLEGRO_BITMAP* image4;
	ALLEGRO_BITMAP* image5;
	ALLEGRO_BITMAP* image6;
	int y = 120;
	interfaz();
	void install();
	void impresionMenuPrincipal1();
	void impresionMenuPrincipal2();
	void crearMenuPrincipal();
   void borrarMenuPrincipal();
   void borrarFondo();
   void impresionJuego();
   void borrarJuego();
   void impresionFondo();
   void fondoRating();
   void borrarRating();
   void impresionEnemigos();

};
#endif 

