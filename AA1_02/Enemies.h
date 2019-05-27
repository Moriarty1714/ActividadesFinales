#pragma once
#include <iostream>
#include <string>
enum class EnemyType { ZOMBIE, VAMPIRE, GHOST, WITCH };
enum class Name {Alpha, Beta, Gamma, Etha, Epsilon, Pi};
class Enemy {
public:
	EnemyType type;
	Name name;
	int health;

	Enemy();


};