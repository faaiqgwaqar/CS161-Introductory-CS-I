/********************************************************************* 
 * ** Author: Faaiq G Waqar
 * ** File Name: GBoard.cpp
 * ** Date: 8/14/2018
 * ** Description: The program as a whole is a 15 x 15 version of Tic Tac
 * Toe, and this specific file is used for implementation of the Board Class
 * *********************************************************************/ 

#include <iostream>
#include "GBoard.hpp"

GBoard::GBoard(){ //DEFAULT CONSTRUCTOR
	for(int i=0;i<15;i++){ //THIS IS A 2D ARRAY, INITIALLIZE ROWS
		for(int j=0;j<15;j++) //INITIALIZE COLS
			board[i][j] = ' '; //SET EACH SPACE ON BOARD TO AN EMPTY SPACE
	}
	
	gameState game = UNFINISHED; //GAME STATE UNFINISHED BY DEFAULT
}

bool GBoard::makeMove(int row,int col,char player){ // USED TO UNDERSTAND MOVES LEFT AND WINNERS

	if (row >= 0 && row < 15 && col >= 0 && col < 15) { // THIS IS TO MAKE SURE IF THE GAME IS STILL GOING
		if (getGameState() != UNFINISHED || board[row][col] != ' ') {
			return false; //NOT FINISHED
		}
		board[row][col] = player;    //SET TO PLAYER CHARECTOR
	}

	int count = 0; //USED TO ITERATE HOW MANY TIMES IT APPEARS
	for (int i = 0; i < 15; i++) { //THIS ONE WILL CHECK IN A SINGLE ROW
		count = 0;
		for (int j = 0; j < 15; j++) {
			if (board[i][j] == player) {
				count++;
				if (count == 5) {
					if (player == 'x')
						game = X_WON; //WINNER X IF THE 5 IN A ROW IS X
					else
						game = O_WON;
				}
			}
			else { //RESET COUNT IF NOT FOUND
				count = 0;
			}
		}
	}
	
	for (int i = 0; i < 15; i++) { //LOOP TO SCAN COL
		count = 0; // RESET ON ROW
		for (int j = 0; j < 15; j++) {
			if (board[j][i] == player) {
				count++; //ADD TO COUNT
				if (count == 5) {
					if (player == 'x')
                                                game = X_WON; //WINNER BASED ON PLAYER
                                        else
                                                game = O_WON;
				}
			}
	
			else {
				count = 0;
			}
		}
	}
	
	int i = 0; //RESET LOOP ITERATOR
	int j = 0;
	
	for (int row = 0; row < 15; row++) { //DIAGONAL BASED WINNER
		i = row;
		j = 0;
		count = 0;
		while (i < 15 && j < 15) {
			if (board[i][j] == player) {
				count++;
			if (count == 5) {
				 if (player == 'x')
                                 	game = X_WON;
                                 else
                                        game = O_WON;
			}
		}
		else {
			count = 0;
		}
			i++;
			j++;
		}
	}

	for (int col = 0; col < 15; col++) { 
		i = 0;
		j = col;
		while (i < 15 && j < 15) {
			if (board[i][j] == player) {
				count++;
				if (count == 5) {
					if (player == 'x')
                                                game = X_WON;
                                        else
                                                game = O_WON;
				}
			}
			else {
				count = 0;
			}
	
			i++;
			j++;
		}
	}

	for (int row = 0; row < 15; row++) { //DIAGONAL BASED WINNER (REVERSE)
		i = row;
		j = 14;
		count = 0;
		while (i < 15 && j >= 0) {
			if (board[i][j] == player) {
				count++;
				if (count == 5) {
					if (player == 'x')
                                                game = X_WON;
                                        else
                                                game = O_WON;
				}
			}
			else {
				count = 0;
			}
				i++;
				j--;
		}
	}

	for (int col = 14; col >= 0; col--) { 
		i = 0;
		j = col;
		count = 0;
		while (i < 15 && j >= 0) {
			if (board[i][j] == player) {
				count++;
				if (count == 5) {
					if (player == 'x')
                                                game = X_WON;
                                        else
                                                game = O_WON;
				}
			}
			
			else {
				count = 0;
			}
			i++;
			j--;
		}
			return true;
		}

		if(game != X_WON && game!= O_WON) //IF NO ONE WINS, ITS A DRAW
			game = DRAW;
		
		return false;
}


gameState GBoard::getGameState(){ //GETTER FOR GAMESTATE
	return game;
}

//int main(){
//	return 0;
//}
