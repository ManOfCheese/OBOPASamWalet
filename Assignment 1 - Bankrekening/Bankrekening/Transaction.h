#include <string>
#pragma once
class Transaction {
	public:
		Transaction( float _amount, std::string _date );
		void setAddition( bool _isAddition );
		bool isAddition() const;
		float getTransactionAmount() const;
		std::string getDate() const;

	private:
		bool addition;
		float amount;
		std::string date;
};

