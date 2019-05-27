#include <iostream>
#include <string>
#include "Enemies.h"

const int MAX_ENEMIES{ 15 };

bool operator== (Enemy enemy1, Enemy enemy2) {
	return (enemy1.name == enemy2.name && enemy1.type == enemy2.type);
}

int main() {
	int count1{ 0 };
	
	Enemy enemy[MAX_ENEMIES];

	while (count1 != MAX_ENEMIES) {
		int count2{ 0 };
		Enemy tmp;

		if (count1 == 0) { enemy[count1] = tmp; count1++; };

		for (int i{ 0 }; i <= count1; i++) {
			if (tmp == enemy[i]) break;
			count2++;
			if (count2==count1) {
				enemy[count1] = tmp;
				count1++;
				break;
			}
		}
	}
	
	return 0;
}