#pragma once
#include "Enemy.h"
class Alive_Enemy:public Enemy
{
private:
	bool curse_damage;
	bool state;
public:
	Alive_Enemy(int cd = 2, bool st = true) : Enemy(){curse_damage = cd; state = st; }
	~Alive_Enemy() {};
	bool get_curse_damage() { return curse_damage; }
	bool get_state() { 
		if (HP <= 0) state = dead;
		return state;
	}
	void set_curse_damage(bool cd) { curse_damage = cd; }
	void set_state(bool st) { state = st; }
	virtual int get_type() {
		if (HP <= 0) state = dead;
		if (state == false) return dead;
		else return alive;
	}
};

