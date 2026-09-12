#include <iostream>

class Bank 
{
	
private:
		
	const int AccNum {};
	std::string Name {};
	float Balance {};

public:
	Bank(int AccNum, std::string Name, float Balance) : AccNum(AccNum), Name(Name), Balance(Balance)
	{
		std::cout << Name << " is now a client." << std::endl;
	}

	~Bank()
	{
		std::cout << Name << " is not a client anymore." << std::endl;
	}
		
	float toDeposit(float Payment)
	{
		Balance = this->Balance + Payment;
		return Balance; 
	}

	float toWithdraw(float WithdrawSum)
	{
		if (WithdrawSum <= Balance) {
			Balance = this->Balance - WithdrawSum;
			return Balance;
		}
		else {
			std::cout << "Not enough money on your account!" << std::endl;
			return Balance;
		}
	}
};

int main() 
{
	
	std::cout << "What is your account number?" << std::endl;
	
	short accNumber; std::cin >> accNumber;

	
	//Bank Michael(002, "Michael", 0);
	//Bank Jacob(003, "Jacob", 0);

	float Payment;
	
	std::string Name;

	std::cout << "What is your name?" << std::endl;
	std::cin >> Name;

	Bank Obj1(001, Name, 0);

	std::cout << "Choose your operation" << std::endl;
	std::cout << "1 - withdraw money" << std::endl;
	std::cout << "2 - deposit money" << std::endl;
	short operationOperator; std::cin >> operationOperator;

	if (operationOperator == 1) 
	{	
		std::cout << "Write your withdrawal amount" << std::endl;
		float WithdrawSum; std::cin >> WithdrawSum;

		std::cout << "New balance is " << Obj1.toWithdraw(WithdrawSum) << std::endl;
	}
	else if (operationOperator == 2) 
	{	
		std::cout << "Write your deposit" << std::endl;

		std::cin >> Payment;

		std::cout << "New balance is " << Obj1.toDeposit(Payment) << std::endl;
	}
	else 
	{
		std::cout << "Ti che, debil? Vvedi normal'noe chislo!" << std::endl;
	};
	//Картофельный ахерел в край. Его надо забанить.

	return 0;
}