#include "Die.h"

void Die::roll() {
	value = (rand() % 6) + 1;
}