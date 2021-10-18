#include "Pila.h"

Pila* Pila::Apilar(Pila* pila, char song1[100], char artist1[100]) {
	
	Pila* aux = new Pila();

	for (int i = 0; i < 100; i++) {

		if (artist[i] < 0) {
			break;
		}

		aux->artist[i] = artist1[1];

	}

	for (int i = 0; i < 100; i++) {

		if (song[i] < 0) {
			break;
		}

		aux->song[i] = song1[1];

	}

	aux->next = pila;

	pila = aux;
	return pila;
	
}

Pila* Pila::Desapilar(Pila* pila) {
	Pila* pi = new Pila();
	pi = pila->next;

	return pi;
}

Pila* Pila::ExchangePila(Pila* pila, int value, char song1[100], char artist1[100]) {
	Pila* temp = new Pila();
	temp = pila;

	for (int i = 0; i < value; i++) {
		temp = temp->next;
	}

	for (int i = 0; i < 100; i++) {
		temp->artist[i] = artist1[i];
		temp->song[i] = song1[i];
	}

	return temp;

}

char Pila::artistTop(Pila* pila, int loc, int value) {
	Pila* temp = new Pila();
	temp = pila;
	int count = 0;

	for (int i = 0; i < value; i++) {
		temp = temp->next;
	}

	return temp->artist[loc];
}

char Pila::songTop(Pila* pila, int loc, int value) {
	Pila* temp = new Pila();
	temp = pila;
	int count = 0;

	for (int i = 0; i < value; i++) {
		temp = temp->next;
	}

	return temp->song[loc];
}