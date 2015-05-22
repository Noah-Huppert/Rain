#ifndef HELP_H
#define HELP_H

#include <iostream>
#include "Command.h"
#include "Utils.h"

class Help : public Command {
public:
	Help() : Command("help") {}

	void run() {
		coutFile("help.txt");
	}
};

#endif