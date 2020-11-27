#include <string>
#include "Transaction.h"

Transaction::Transaction( float _amount, std::string _date ) {
	this->amount = _amount;
	this->date = _date;
}

void Transaction::setAddition( bool _addition ) {
	addition = _addition;
}

bool Transaction::isAddition() const {
	return addition;
}

float Transaction::getTransactionAmount() const {
	return amount;
}

std::string Transaction::getDate() const {
	return date;
}