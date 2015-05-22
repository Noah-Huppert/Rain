#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <vector>

class Game {
public:
	std::vector<Die> rollPool;
	std::vector<Die> storePool;

	std::vector<Command*> commands;

	Game();

	Command* getCommand(std::string command);
	void loop();
};

#endif