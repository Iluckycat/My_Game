#include "Stairs.h"

/*
Stairs::Stairs()
{
}


Stairs::~Stairs()
{
}*/

int Stairs::get_type() {
	if (updown == up) return stairs_up;
	else return stairs_down;
}
