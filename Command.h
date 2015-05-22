#ifndef COMMAND_H
#define COMMAND_H

#include <string>

class Command {
public:
	std::string command;

	Command(std::string command): command(command) {}
	virtual void run() = 0;
};

#endif