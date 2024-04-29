#pragma once
#include <vector>
#include <iostream>

#include "Player.h"
#include "Helper.h"

class Game {
private:
	std::vector<std::vector<char>> board;
	Player player1;
	Player player2;

	Player* currentPlayer;
	GameState state;

public:
	Game(Player p1, Player p2) : board(3, std::vector<char>(3, ' ')), player1(p1), player2(p2), currentPlayer(&player1), state(GameState::ONGOING) {}
	GameState getGameState() const { return state; }
	Player* getCurrentPlayer() const { return currentPlayer; }


	void displayBoard() {
		// Print the top row of the board
		std::cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << std::endl;
		std::cout << "---|---|---" << std::endl;
		// Print the middle row of the board
		std::cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << std::endl;
		std::cout << "---|---|---" << std::endl;
		// Print the bottom row of the board
		std::cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << std::endl;
	}

	bool makeMove(int row, int col) {
		if (row < 1 || row > 3 || col < 1 || col > 3 || board[row - 1][col - 1] != ' ') {
			std::cout << "Invalid move. Please try again." << std::endl;
			return false;
		}
		board[row - 1][col - 1] = currentPlayer->getSymbol();
		return true;
	}

	void updateGameState() {
		// check  rows and columns
		for (int i = 0; i < 3; ++i) {
			if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') {
				if (board[i][0] == player1.getSymbol())
					state = GameState::PLAYER1_WIN;
				else
					state = GameState::PLAYER2_WIN;
				
				return;
			}
			// check verticals
			if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ') {
				if (board[0][i] == player1.getSymbol())
					state = GameState::PLAYER1_WIN;
				else state = GameState::PLAYER2_WIN;

				return;
			
			}

			//check diagonals
			if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') {
				if (board[0][0] == player1.getSymbol()) {
					state = GameState::PLAYER1_WIN;
				}
				else
					state = GameState::PLAYER2_WIN;
				return;
			}

			if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') {
				if (board[0][0] == player1.getSymbol()) {
					state = GameState::PLAYER1_WIN;
				}
				else
					state = GameState::PLAYER2_WIN;
				return;
			}

			// Check for draw
			bool boardFull = true;
			for (int i = 0; i < 3; ++i) {
				for (int j = 0; j < 3; ++j) {
					if (board[i][j] == ' ')
						boardFull = false;
				}
			}
			if (boardFull)
				state = GameState::DRAW;
		}
	
	}


	void switchPlayer() {
		std::cout << "SwitchPlayer: " << getCurrentPlayer()->getSymbol() << std::endl;

		if (getCurrentPlayer()->getSymbol() == player1.getSymbol()) 
			currentPlayer = &player2;
		else if (getCurrentPlayer()->getSymbol() == player2.getSymbol())
			currentPlayer = &player1;
	}

	~Game() {
	}

};

