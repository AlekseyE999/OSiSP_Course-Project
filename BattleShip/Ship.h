#pragma once
#include "stdafx.h"

class Ship
{
	int size;
	int damage;
	int statusShip;
	int* squares;
public:
	Ship();
	Ship(int);
	int& getDamage();
	int& getStatus();
	int& getSize();
	int& getSquare(int);
	void setSize(int);
	void setStatus(int);
	void setDamage(int);
	void setSquare(int, int);
	~Ship();
};
