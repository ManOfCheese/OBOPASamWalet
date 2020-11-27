#include "Transaction.h"
#include <list>
#pragma once
class BankAccount {
	public:
		float getSaldo() const;
		std::list<Transaction> getTransactionHistory() const;
		void operator+( Transaction& transaction );
		void operator-( Transaction& transaction );
		friend std::ostream &operator<<(std::ostream &output, const BankAccount &bankAccount);

	private:
		float saldo;
		std::list<Transaction> transactionHistory;
};

