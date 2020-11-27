#include <iostream>
#include <string>
#include "BankAccount.h"

float BankAccount::getSaldo() const {
	return saldo;
}

std::list<Transaction> BankAccount::getTransactionHistory() const {
	return transactionHistory;
}

void BankAccount::operator+( const Transaction& transaction ) {
	transactionHistory.insert(transactionHistory.end(), transaction);
	saldo += transaction.getTransactionAmount();
}

void BankAccount::operator-( const Transaction& transaction ) {
	transactionHistory.insert( transactionHistory.end(), transaction );
	saldo -= transaction.getTransactionAmount();
}

std::ostream& operator<<(std::ostream output, const BankAccount& bankAccount) {
	output << "Saldo: " << bankAccount.saldo << std::endl;

	std::list<Transaction>::iterator it;
	for ( it = bankAccount.getTransactionHistory().begin(); it != bankAccount.getTransactionHistory().end(); it++) {
		std::string type;
		if ( it->isAddition() ) { type = "Credit"; }
		else { type = "Charge"; }
		return output << type << it->getTransactionAmount() << it->getDate() << std::endl;
	}
}