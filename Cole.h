#pragma once
class Cole
{
public:
	Cole* next;
	Cole* back;
	Cole* top;
	char artist[100];
	char song[100];

public:
	Cole* AddTop(Cole* cola, char song1[100], char artist1[100]);
	Cole* DelTop(Cole* cola);
	Cole* Erase(Cole* cola, int value);
	char artistTop(Cole* cola, int loc, int value);
	char songTop(Cole* cola, int loc, int value);
};

