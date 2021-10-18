#include "Cole.h"

Cole* Cole::AddTop(Cole* cola, char song1[100], char artist1[100]) {
	Cole* aux = new Cole();

	for (int i = 0; i < 100; i++) {
		aux->artist[i] = artist1[i];
	}

	for (int i = 0; i < 100; i++) {
		aux->song[i] = song1[i];
	}

	aux->next = nullptr;

	if (cola->top == nullptr) {
		cola->top = aux;
	}
	else {
		cola->back->next = aux;
	}
	cola->back = aux;

	return cola;
}

Cole* Cole::DelTop(Cole* cola) {
	cola->top = cola->top->next;
	return cola;
}

Cole* Cole::Erase(Cole* cola, int value) {
	Cole* temp = new Cole();
	Cole* aux = new Cole();
	temp = cola->top;
	int i = 0;
	while (temp != nullptr) {
		if (i == value) {
			aux->next = temp->next;
			return aux;
		}
		else {
			i++;
			aux = temp;
			temp = temp->next;
		}
	}
	return aux;
}

char Cole::artistTop(Cole* cola, int loc, int value) {
	Cole* temp = new Cole();
	temp = cola->top;
	for (int i = 0; i < value; i++) {
		temp = temp->next;
	}

	return temp->artist[loc];
}

char Cole::songTop(Cole* cola, int loc, int value) {
	Cole* temp = new Cole();
	temp = cola->top;
	for (int i = 0; i < value; i++) {
		temp = temp->next;
	}

	return temp->song[loc];
}
