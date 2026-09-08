#include <iostream>


class Bank 
{
	
	private:
		
		int AccNum = 0;
		std::string Name = "dsa";
		float Balance = 0;

	public:
		Bank(int AccNum, std::string Name, float Balance)
		{
			std::cout << Name << " is now a client." << std::endl;
		}

		~Bank()
		{
			std::cout << Name << " is not a client anymore." << std::endl;
		}
		
		float toDeposit()
		{
			std::cout << "Write your payment" << std::endl;
			float Payment; std::cin >> Payment;
			Balance = this->Balance + Payment;
			return Balance; 
		}

		float toWithdraw()
		{
			std::cout << "Write the sum you are willing to withdraw" << std::endl;
			float WithdrawSum; std::cin >> WithdrawSum;
			Balance = this->Balance - WithdrawSum;
			return Balance;
		}

};

int main() 
{
	
	std::cout << "What is your account number?" << std::endl;
	
	short accNumber; std::cin >> accNumber;
	


	std::cout << "Choose your operation" << std::endl;
	std::cout << "1 - withdraw money" << std::endl;
	std::cout << "2 - deposit money" << std::endl;
	short operationOperator; std::cin >> operationOperator;

	if (operationOperator == 1) 
	{
		std::cout << "New balance is" << /*toWithdraw <<*/ std::endl;
	}
	else if (operationOperator == 2) 
	{
		std::cout << "New balance is" << /*toDeposit  <<*/ std::endl;
	}
	else 
	{
	};
	return 0;

}