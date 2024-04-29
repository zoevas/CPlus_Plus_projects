#include "Player.h"
#include "Game.h"

int main() {
	int row, col;

	Player p1{'X'};
	Player p2{ 'O' };

	Game game(p1, p2);

	std::cout << "Welcome to Tic Tac Toe!\n";

	std::cout << "Player 1: X, Player 2: O\n";
	

	while (game.getGameState() == GameState::ONGOING) {
		std::cout << "Player " << game.getCurrentPlayer()->getSymbol() << "'s turn.";
		std::cout << "Enter row (1-3): ";
		std::cin >> row;

		std::cout << "Enter column (1-3): ";
		std::cin >> col;

		std::cout << "You entered row: " << row << " and column: " << col << std::endl;
		game.makeMove(row, col);
		game.updateGameState();
		game.displayBoard();
		game.switchPlayer();
	}

	if (game.getGameState() == GameState::PLAYER1_WIN)
		std::cout << "Player1 wins!" << std::endl;
	else if (game.getGameState() == GameState::PLAYER2_WIN)
		std::cout << "Player2 wins!" << std::endl;
	else
		std::cout << "It's a draw!" << std::endl;

	return 0;

}