#include <string>
#pragma once
class Transaction {
	public:
		bool isAddition() const;
		float getTransactionAmount() const;
		std::string getDate() const;

	private:
		bool addition;
		float amount;
		std::string date;
};

