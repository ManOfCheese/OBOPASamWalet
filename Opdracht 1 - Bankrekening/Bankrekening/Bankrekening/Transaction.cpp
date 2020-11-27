#include <string>
#include "Transaction.h"

bool Transaction::isAddition() const {
	return addition;
}

float Transaction::getTransactionAmount() const {
	return amount;
}

std::string Transaction::getDate() const {
	return date;
}