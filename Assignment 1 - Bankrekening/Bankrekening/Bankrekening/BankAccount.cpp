#include <iostream>
#include <string>
#include "BankAccount.h"

float BankAccount::getSaldo() const {
	return saldo;
}

std::list<Transaction> BankAccount::getTransactionHistory() const {
	return transactionHistory;
}

void BankAccount::operator+( Transaction& transaction ) {
	transaction.setAddition( true );
	transactionHistory.insert(transactionHistory.end(), transaction);
	saldo += transaction.getTransactionAmount();
}

void BankAccount::operator-( Transaction& transaction ) {
	transaction.setAddition( false );
	transactionHistory.insert( transactionHistory.end(), transaction );
	saldo -= transaction.getTransactionAmount();
}

std::ostream& operator<<( std::ostream& output, const BankAccount& bankAccount ) {
	output << "Saldo: " << bankAccount.getSaldo() << std::endl;

	std::list<Transaction> transactionHistory = bankAccount.getTransactionHistory();
	for ( std::list<Transaction>::iterator it = transactionHistory.begin(); it != transactionHistory.end(); it++) {
		std::string type;
		if ( it->isAddition() ) { type = "Credit"; }
		else { type = "Charge"; }
		output << type << " - "  << it->getTransactionAmount() << " - " << it->getDate() << std::endl;
	}
	return output;
}