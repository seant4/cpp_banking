#ifndef USER_H
#define USER_H

class User{
	private:
		std::string name;
		std::string password;
		double balance;
		int rate;
	public:
		User(std::string n, std::string p, double b, int r);
		std::string userData();
		std::string getName();
		std::string getPass();
		double getBalance();
		int getRate();
		int deposit(int a);
		int withdraw(int a);
		void userLogin();
		template <typename ret> ret men();
		void deposit();
		void withdraw();

};
#endif
