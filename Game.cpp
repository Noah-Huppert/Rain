#include "Game.h"
#include "Die.h"
#include "Command.h"
#include "Help.h"

Game::Game() {
	commands.push_back(new Help());
}

Command* Game::getCommand(std::string command) {
	for (int i = 0; i < commands.size(); i++) {
		if (commands[i]->command == command) {
			return commands[i];
		}
	}

	return nullptr;
}

void Game::loop() {
	std::string cmd = "help";

	while (cmd != "exit") {
		Command *command = getCommand(cmd);

		if (command != nullptr) {
			command->run();
		} else {
			std::cout << "\"" << cmd << "\" is not a known command"; 
		}

		std::cout << "\n$: ";
		std::cin >> cmd;
	}
}