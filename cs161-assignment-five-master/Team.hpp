#ifndef WAQARF_TEAM_HPP
#define WAQARF_TEAM_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include "Player.hpp"

using std::cout;
using std::cin;
using std::string;

class Team{
	private:
		Player pointGuard;
		Player shootingGuard;
		Player smallForward;
		Player powerForward;
		Player center;
	public:
		Team(Player pointGuard,Player shootingGuard,Player smallForward,Player powerForward,Player center);
		void setPointGuard(Player pointGuard);
		void setShootingGuard(Player shootingGuard);
		void setSmallForward(Player smallForward);
		void setPowerForward(Player powerForward);
		void setCenter(Player center);
	
		Player getPointGuard();
		Player getShootingGuard();
		Player getSmallForward();
		Player getPowerForward();
		Player getCenter();
	
		int totalPoints();
};
		
#endif
