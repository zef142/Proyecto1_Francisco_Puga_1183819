#pragma once
class Pila
{
public:
	Pila* next = nullptr;
	char song[50];
	char artist[50];

public:
	Pila* Apilar(Pila* pila, char song1[50], char artist1[50]);
	Pila* Desapilar(Pila* pila);
	Pila* ExchangePila(Pila* pila, int value, char song1[50], char artist1[50]);
	char artistTop(Pila* pila, int loc, int value);
	char songTop(Pila* pila, int loc, int value);
};

