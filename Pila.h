#pragma once
class Pila
{
public:
	Pila* next = nullptr;
	char song[100];
	char artist[100];

public:
	Pila* Apilar(Pila* pila, char song1[100], char artist1[100]);
	Pila* Desapilar(Pila* pila);
	Pila* ExchangePila(Pila* pila, int value, char song1[100], char artist1[100]);
	char artistTop(Pila* pila, int loc, int value);
	char songTop(Pila* pila, int loc, int value);
};

