#pragma once
class Cole
{
public:
	Cole* next;
	Cole* back;
	Cole* top;
	char artist[50];
	char song[50];

public:
	Cole* AddTop(Cole* cola, char song1[50], char artist1[50]);
	Cole* DelTop(Cole* cola);
	Cole* Erase(Cole* cola, int value);
	char artistTop(Cole* cola, int loc, int value);
	char songTop(Cole* cola, int loc, int value);
};

