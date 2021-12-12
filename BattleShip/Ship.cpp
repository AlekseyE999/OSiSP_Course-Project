#include "stdafx.h"
#include "Ship.h"


Ship::Ship(int i)
{
	size = i;
	squares = new int[size];
	statusShip = shipNew;
	damage = size;
}

Ship::Ship() {}

int& Ship::getDamage()
{
	return damage;
}

void Ship::setDamage(int damage)
{
	this->damage = damage;
}

int& Ship::getStatus()
{
	return statusShip;
}

void Ship::setStatus(int statusShip)
{
	this->statusShip = statusShip;
}

int& Ship::getSize()
{
	return size;
}

void Ship::setSize(int i)
{
	size = i;
}

int& Ship::getSquare(int i)
{
	return squares[i];
}


void Ship::setSquare(int i, int value)
{
	squares[i] = value;
}


Ship::~Ship()
{
	delete[]squares;
}
