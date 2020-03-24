#ifndef WAQARF_PLAYER_HPP
#define WAQARF_PLAYER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

using std::cout;
using std::cin;
using std::string;

class Player {
	private:
		int points;
		int rebounds;
		int assists;
		string name;
	public:
		Player();
		Player(string name, int points, int rebounds, int assists);
		string getName();
		void setPoints(int points);
		int getPoints();
		void setRebounds(int rebounds);
		int getRebounds();
		void setAssists(int assists);
		int getAssists();
		bool hasMorePointsThan(Player p);
};

#endif
