/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: Team.cpp
 * ** Date: 7/23/2018
 * ** Description: The program as a whole sorts the members of a basketball team
 * as well as their stats. This file specifically operates off of the Team class 
 * *********************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>
#include "Team.hpp"
#include "Player.hpp"

using std::cout;
using std::cin;
using std::string;

/********************************************************************* 
 * ** Description: Default Constructor, sets information of players to private members
 * *********************************************************************/ 

Team::Team(Player pointGuard,Player shootingGuard,Player smallForward,Player powerForward,Player center){
	this -> pointGuard = pointGuard;
	this -> shootingGuard = shootingGuard;
	this -> smallForward = smallForward;
	this -> powerForward = powerForward;
	this -> center = center;
}

/********************************************************************* 
 * ** Description: Setters, set individual elements to their respective elements
 * *********************************************************************/ 

void Team::setPointGuard(Player pointGuard){
	this -> pointGuard = pointGuard;
}

void Team::setShootingGuard(Player shootingGuard){
	this -> shootingGuard = shootingGuard;
}

void Team::setSmallForward(Player smallForward){
	this -> smallForward = smallForward;
}

void Team::setPowerForward(Player powerForward){
	this -> powerForward = powerForward;
}

void Team::setCenter(Player center){
	this -> center = center;
}

/********************************************************************* 
 * ** Description: Getters, Return the specific tpye requested
 * *********************************************************************/ 

Player Team::getPointGuard(){
	return pointGuard;
}

Player Team::getShootingGuard(){
	return shootingGuard;
}

Player Team::getSmallForward(){
	return smallForward;
}

Player Team::getPowerForward(){
	return powerForward;
}

Player Team::getCenter(){
	return center;
}

/********************************************************************* 
 * ** Description: This Functions purpose is to calculate and return the total points
 * *********************************************************************/ 

int Team::totalPoints(){
	return (pointGuard.getPoints()+shootingGuard.getPoints()+smallForward.getPoints()+powerForward.getPoints()+center.getPoints());
}

