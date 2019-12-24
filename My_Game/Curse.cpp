#include "Curse.h"



/*Curse::Curse()
{
}


Curse::~Curse()
{
}*/

void Curse::damn(Enemy* enemy) {
	enemy->set_HP(enemy->get_HP() - damage);
	if (enemy->get_type() == alive) {
		Alive_Enemy* alive = dynamic_cast<Alive_Enemy*>(enemy);
		alive->set_curse_damage(effect);
	}
}
