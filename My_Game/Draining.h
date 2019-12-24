#pragma once
#include "Skill.h"
#include "Alive_Enemy.h"
class Draining : public Skill
{
private:
	int level;
public:
	Draining(int lvl = 1) : Skill() { level = lvl; }
	~Draining() {}
	int get_level() { return level; }
	void set_level(int lvl) { level = lvl; } 
	virtual int get_type() { return draining; }
	int get_essence(Alive_Enemy);
};

