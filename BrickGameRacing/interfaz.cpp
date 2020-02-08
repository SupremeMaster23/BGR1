

#include<allegro5/allegro.h>

#include"interfaz.h"


interfaz::interfaz() {

	
}
void interfaz::install() {
	al_init();
	al_init_font_addon();
	al_init_ttf_addon();
	al_init_image_addon();
}
void interfaz::impresionMenuPrincipal1() {
	if (cont == 0) {
		display = al_create_display(450, 550);
		cont = 1;
	}
	 font = al_load_ttf_font("gamef.ttf", 30, 0);
	 font0 = al_load_ttf_font("gamef.ttf", 30, 0);
	 font1 = al_load_ttf_font("gamef.ttf", 25, 0);
	 font2 = al_load_ttf_font("gamef.ttf", 25, 0);
	 font3 = al_load_ttf_font("gamef.ttf", 25, 0);
	 font4 = al_load_ttf_font("gamef.ttf", 25, 0);
	 image = al_load_bitmap("carM.png");
		al_draw_bitmap(image, 70, 80, NULL);
		al_draw_text(font, al_map_rgb(255, 255, 255), 110, 25, 0, "BRICK GAME");
		al_draw_text(font0, al_map_rgb(255, 255, 255), 150, 85, 0, "RACING");
		al_draw_text(font1, al_map_rgb(57, 255, 0), 145, 280, 0, "1- START");
		al_draw_text(font2, al_map_rgb(255, 255, 0), 135, 330, 0, "2- RATINGS");
		al_draw_text(font3, al_map_rgb(255, 0, 0), 160, 380, 0, "3- QUIT");
		al_flip_display();
}

void interfaz::impresionMenuPrincipal2() {
	font = al_load_ttf_font("gamef.ttf", 30, 0);
	font0 = al_load_ttf_font("gamef.ttf", 30, 0);
	font1 = al_load_ttf_font("gamef.ttf", 25, 0);
	font2 = al_load_ttf_font("gamef.ttf", 25, 0);
	font3 = al_load_ttf_font("gamef.ttf", 25, 0);
	font4 = al_load_ttf_font("gamef.ttf", 25, 0);
	image = al_load_bitmap("carM.png");
	al_draw_bitmap(image, 70, 80, NULL);
	al_draw_text(font, al_map_rgb(255, 255, 255), 110, 25, 0, "BRICK GAME");
	al_draw_text(font0, al_map_rgb(255, 255, 255), 150, 85, 0, "RACING");
	al_draw_text(font1, al_map_rgb(57, 255, 0), 145, 280, 0, "1- START");
	al_draw_text(font2, al_map_rgb(255, 255, 0), 135, 330, 0, "2- RATINGS");
	al_draw_text(font3, al_map_rgb(255, 0, 0), 160, 380, 0, "3- QUIT");
	al_flip_display();
	//borrarMenuPrincipal();
}


void interfaz::fondoRating() {
	al_clear_to_color(al_map_rgb(0, 0, 0));
	font7= al_load_ttf_font("gamef.ttf", 25, 0);
	al_draw_text(font7, al_map_rgb(255, 255, 255), 110, 25, 0, "RATINGS");
	al_flip_display();
}

void interfaz::borrarRating() {
	al_destroy_font(font7);
	al_clear_to_color(al_map_rgb(0, 0, 0));
}

void interfaz::borrarFondo() {
	al_destroy_bitmap(image2);
	al_destroy_font(font5);
	al_destroy_font(font6);
}

void interfaz::borrarMenuPrincipal() {
	al_destroy_bitmap(image);
	al_destroy_font(font);
	al_destroy_font(font0);
	al_destroy_font(font1);
	al_destroy_font(font2);
	al_destroy_font(font3);
	al_destroy_font(font4);

	al_clear_to_color(al_map_rgb(0, 0, 0));
}

void interfaz::crearMenuPrincipal() {
	font = al_load_ttf_font("gamef.ttf", 30, 0);
	font0 = al_load_ttf_font("gamef.ttf", 30, 0);
	font1 = al_load_ttf_font("gamef.ttf", 25, 0);
	font2 = al_load_ttf_font("gamef.ttf", 25, 0);
	font3 = al_load_ttf_font("gamef.ttf", 25, 0);
	font4 = al_load_ttf_font("gamef.ttf", 25, 0);
	image = al_load_bitmap("carM.png");
}

void interfaz::impresionJuego() {
	font5 = al_load_ttf_font("gamef.ttf", 25, 0);
	font6 = al_load_ttf_font("gamef.ttf", 25, 0);
	image2 = al_load_bitmap("fondo1.png");
	image3 = al_load_bitmap("carro1.png");
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_bitmap(image2, 0, 0, NULL);
	al_draw_text(font5, al_map_rgb(255, 255, 255), 0, 0, 0, "NIVEL=");
	al_draw_text(font6, al_map_rgb(255, 255, 255), 0, 50, 0, "PUNTOS= ");
	al_draw_bitmap(image3, 200, 475, NULL);

	al_flip_display();
}

void interfaz::borrarJuego() {
	al_destroy_bitmap(image2);
	al_destroy_bitmap(image3);
	al_destroy_font(font5);
	al_destroy_font(font6);
	al_clear_to_color(al_map_rgb(0, 0, 0));
}

void interfaz::impresionFondo() {
	font5 = al_load_ttf_font("gamef.ttf", 25, 0);
	font6 = al_load_ttf_font("gamef.ttf", 25, 0);
	image2 = al_load_bitmap("fondo1.png");
	al_draw_bitmap(image2, 0, 0, NULL);
	al_draw_text(font5, al_map_rgb(255, 255, 255), 0, 0, 0, "NIVEL=");
	al_draw_text(font6, al_map_rgb(255, 255, 255), 0, 50, 0, "PUNTOS= ");

}

void interfaz::impresionEnemigos() {
	image4 = al_load_bitmap("carroEnemigo1.png");
	image5 = al_load_bitmap("carroEnemigo2.png");
	image6 = al_load_bitmap("carroEnemigo3.png");
	
			al_draw_bitmap(image5, 200,y, NULL);
	
			al_draw_bitmap(image6, 350, y, NULL);
			y += 50;
			if (y > 550) {
				y = 50;
		}
		
}