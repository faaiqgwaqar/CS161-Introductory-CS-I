/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: Player.cpp
 * ** Date: 7/23/2018
 * ** Description: The program as a whole sorts the members of a basketball team
 * as well as their stats. This file in particular has the designation to give player
 * statistics.
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
 * ** Description: Constuctors, both default and Parameterized
 * *********************************************************************/ 

Player::Player(){ //sets all to defaults
	name = "";
	points = -1;
	rebounds = -1;
	assists = -1;
}

Player::Player(string name, int points,int rebounds,int assists){
	this -> points = points; //sets according to parameters
	this -> rebounds = rebounds;
	this -> assists = assists;
	this -> name = name;
}

/********************************************************************* 
 * ** Description: Setters, each setting individual private elements
 * *********************************************************************/ 

void Player::setPoints(int points){
	this -> points = points;
}

void Player::setRebounds(int rebounds){
	this -> rebounds = rebounds;
}

void Player::setAssists(int assists){
	this -> assists = assists;
}

/********************************************************************* 
 * ** Description: Getters, return respective types
 * *********************************************************************/ 

string Player::getName(){
	return name;
}

int Player::getPoints(){
	return points;
}

int Player::getRebounds(){
	return rebounds;
}

int Player::getAssists(){
	return assists;
}

/********************************************************************* 
 * ** Description: Function used to compare players and see if a player
 * has more points that another
 * *********************************************************************/ 

bool Player::hasMorePointsThan(Player p){
	if(this -> points > p.points)
		return true; // indicates that the player does
	else
		false;
}
