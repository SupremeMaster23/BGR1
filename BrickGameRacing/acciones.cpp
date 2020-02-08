#include<allegro5/allegro.h>
#include<allegro5/allegro_image.h>
#include"acciones.h"
#include"Enemies.h"
#include "interfaz.h"


acciones::acciones() {
	 /*= new interfaz();*/
}

void acciones::install2() {
	al_init();
	al_install_keyboard();
	al_init_image_addon();
}

void acciones::accionPrincipal() {
	//interfaz i;
	while (true) {
		i.impresionEnemigos();
		al_get_keyboard_state(&keyState);

		if (al_key_down(&keyState, ALLEGRO_KEY_1)) {
			i.borrarMenuPrincipal();
			i.impresionJuego();
			accionJugador();



		}

		if (al_key_down(&keyState, ALLEGRO_KEY_2)) {
			i.borrarMenuPrincipal();
			i.fondoRating();
			accionRating();

		}

		if (al_key_down(&keyState, ALLEGRO_KEY_3)) {
			i.fondoRating();
			accionRating();

		}

	}
	
}

void acciones::accionJugador() {

	eventQueue = al_create_event_queue();
	
	al_register_event_source(eventQueue, al_get_keyboard_event_source());
	
	al_flip_display();
	
	done1 =false;
	
	while (done1==false) {

		
		
		al_wait_for_event(eventQueue, &events);
		
		i.impresionEnemigos();
		
		if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (events.keyboard.keycode) {
			case ALLEGRO_KEY_RIGHT:
				if (playerx < 350) {

					playerx += 150;
					
				}

				break;

			case ALLEGRO_KEY_LEFT:
				if (playerx > 100) {
					playerx -= 150;
				}

				break;

			case ALLEGRO_KEY_UP:
				if (playery >150) {
					playery -= 50;
				}

			


				break;

			case ALLEGRO_KEY_ESCAPE:
				done1 = true;
				break;
			}
			al_clear_to_color(al_map_rgb(0, 0, 0));
			i.borrarFondo();
			i.image3 = al_load_bitmap("carro1.png");
			i.impresionFondo();
			al_draw_bitmap(i.image3, playerx, playery, NULL);
		}
	
		al_flip_display();
		
	}
	al_destroy_event_queue(eventQueue);
	
	
	playerx = 200;
	playery = 475;
	i.borrarJuego();
	accionRegreso1();
	
}
void acciones::accionRating() {
	//interfaz i;
	eventQueue = al_create_event_queue();
	al_register_event_source(eventQueue, al_get_keyboard_event_source());
	done1 = false;
	while (done1 == false) {
		
		al_wait_for_event(eventQueue, &events);

		if (events.type == ALLEGRO_EVENT_KEY_DOWN) {
			switch (events.keyboard.keycode) {		

			case ALLEGRO_KEY_ESCAPE:
				done1 = true;
				break;
			}
		}


	}
	i.borrarRating();
	al_destroy_event_queue(eventQueue);
	accionRegreso1();

}

void acciones::accionRegreso1() {
	//interfaz i;

	i.impresionMenuPrincipal2();
	
	

}

void acciones::initEnemigos() {
	carroE[0].live = false;
	carroE[0].speed = 5;
	carroE[0].enemigos = al_load_bitmap("carEnemigo1.png");
	carroE[1].live = false;
	carroE[1].speed = 5;
	carroE[1].enemigos = al_load_bitmap("carEnemigo2.png");
	carroE[2].live = false;
	carroE[2].speed = 5;
	carroE[2].enemigos = al_load_bitmap("carEnemigo3.png");
}

void acciones::drawEnemigos() {
	for (int i = 0; i < 3; i++) {
		if (carroE[i].live == true) {
			al_draw_bitmap(carroE[i].enemigos, carroE[i].posx, carroE[i].posy, NULL);
		}
	}
}

void acciones::startEnemigos() {
	for (int i = 0; i < 3; i++) {
		if (carroE[i].live == false) {
			if (rand() % 3 == 0) {
				carroE[i].live = true;
				carroE[i].posx = 150;
				carroE[i].posy = 350;

			}
		}
	}
}
void acciones::updateEnemigos() {
	for (int i = 0; i < 3; i++) {
		if (carroE[i].live == true) {
			carroE[i].posy += carroE[i].speed;

			if(carroE[i].posy>550){
				carroE[i].live = false;

			}
		}
	}
}


