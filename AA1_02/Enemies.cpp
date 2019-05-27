#include <iostream>
#include <string>
#include "Enemies.h"

Enemy::Enemy() {
	type =static_cast<EnemyType> (rand()%3);
	name =static_cast<Name>(rand()%5);
	health = rand()%100;
	
}


std::string getEnemyTypeString(Enemy e) {
	switch (e.type) {
	case EnemyType::GHOST: {
		return std::string{ "GHOST" };
	}
	case EnemyType::VAMPIRE: {
		return std::string{ "VAMPIRE" };
	}
	case EnemyType::WITCH: {
		return std::string{ "WITCH" };
	}
	case EnemyType::ZOMBIE: {
		return std::string{ "ZOMBIE" };

	}
	}
}