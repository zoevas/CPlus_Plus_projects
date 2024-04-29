#pragma once
class Player {
private:
	char symbol;
public:
	Player(char sym) :symbol(sym) {}
	char getSymbol() const {
		return symbol;
	}
};

