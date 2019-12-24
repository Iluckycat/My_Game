#include <iostream>
#include "Dungeon.h"
#include "Level.h"
int main() {
	char ch = 'y';
	int i = 0;
	Dungeon dg(3);
	dg.read_levels();

	while (ch != 'n') {
			system("cls");

			std::cout << "1. Information about Hero" << std::endl;
			std::cout << "2. Load Heroe's characteristics" << std::endl;
			std::cout << "3. Show Card" << std::endl;
			std::cout << "4. Show Skill Table" << std::endl;
			std::cout << "5. Show Enemies" << std::endl;
			std::cout << "6. Enemie's walk" << std::endl;
			std::cout << "7. Heroe's walk" << std::endl;

			 
			std::cin >> i;

		
		switch (i)
		{
		case 1:
			std::cout << "______Information about Hero______" << std::endl;
			dg.show_characteristics();
			break;
		case 2:
			std::cout << "______Load Heroe's characteristics______" << std::endl;
			dg.read_character();
			break;
		case 3:
			std::cout << "______Show Card______" << std::endl;
			dg.show_level(0);
			break;
		case 4:
			std::cout << "______Show Skill Table______" << std::endl;
			dg.show_skill_table();
			break;

		case 5:
			std::cout << "______Show Enemies______" << std :: endl;
			dg.show_enemies();
			break;

		case 6: std::cout << "______Enemie's Walk______" << std::endl;
			dg.go_enemies(0);
			dg.show_level(0);
			break;
		case 7:
			std::cout << "______Heroe's walk______" << std::endl;
			char ch1 = 'y';
			char ch2;
			while (ch1 != 'n') {
				system("cls");
				std::cout << "Press one of button:" << std::endl;
				std::cout << "W,A,S,D" << std::endl;
				std::cin >> ch2;
				dg.go_character(ch2);
				dg.show_level(0);
				std::cout << "Do you want continue? y/n?" << std::endl;
				std::cin >> ch1;
			}
			break;
		}

		std::cout << "Do you want repeat? y/n?" << std::endl;
		std::cin >> ch;

	}

	system("pause");

}
