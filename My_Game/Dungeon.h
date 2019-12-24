#pragma once
#include <vector>
#include <iostream>
#include <fstream>
#include "Character.h"
#include "Level.h"
enum go { step_ok, end_of_field, no_step_wall, no_step_closed_door, end_of_levels, emeny, win };
enum use_skills {
	used_ok, no_enemy, cant_be_used_to_this_enemy, parent, mana, level,
	max_controlled, max_HP, maxmana
};
enum door { all_ok, no_door, already_opened, already_closed };
enum flag { open, close };
class Dungeon
{
private:
	Character character;
	std::vector<Level> levels;
	int level_number;
	int n;
public:

	Dungeon(int nn = 0);
	~Dungeon() { levels.clear(); }
	Character get_character() { return character; }
	int get_level_number() { return level_number; }
	int get_n() { return n; }
	Level get_level(int i) { return levels[i]; }
	void set_level_number(int ln) { level_number = ln; }
	void read_levels();
	void read_character();
	void save_levels();
	void save_character();
	void read_saved_levels();
	void read_saved_character();
	void go_enemies(int );
	int check_step(int, int, int, char);
	int go_character(char);
	int check_enemy(int, int, int, int);
	int use_skill(char, int);
	void show_level(int i);
	void show_characteristics();
	void show_skill_table();
	void show_enemies();
	void show_controlled_undead();
	int change_door(char, bool);
	int check_door(int, int, bool);
};

