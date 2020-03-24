/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: GBoard.hpp
 * ** Date: 8/14/2018
 * ** Description: The program as a whole is a 15 x 15 version of Tic Tac
 * Toe, and this specific file is used for initialization of the Board Class
 * *********************************************************************/ 

#ifndef WAQARF_GBOARD_HPP //HEADER GUARDS
#define WAQARF_GBOARD_HPP


enum gameState{
	X_WON,O_WON,DRAW,UNFINISHED //ENUM FOR THE OUTCOMES
};

class GBoard{
	private:
		char board[15][15]; //BOARD ARRAY
		gameState game; //GAMESTATE IDENTIFYER
	public:
		GBoard(); //CONSTRUCTOR
		bool makeMove(int row,int col,char player); //MOVE FUCNTION
		gameState getGameState(); //GETTER FOR GAMESTATE
};

#endif
