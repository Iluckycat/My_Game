#pragma once
#include "Skill.h"
#include "Draining.h"
#include "Necromancy.h"
#include "Curse.h"
#include <vector>
#include <fstream>
#include <iostream>
class Skill_Table
{
private:
	std::vector<Skill*> skills;
	int n;
public:
	Skill_Table(int nn = 0);
	~Skill_Table() { skills.clear(); }
	std::vector<Skill*> get_skills() { return skills; }
	Skill* get_skill(int i) { return skills[i]; }
	//int change_skill();
	int get_n() { return n; }
	void read_skills(std::string, std::string, std::string);
	void show_skills();
};

