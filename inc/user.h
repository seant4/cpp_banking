#ifndef USER_H
#define USER_H

class User{
	private:
		std::string name;
		std::string password;
		int balance;
		int rate;
	public:
		User(std::string n, std::string p, int b, int r);
		std::string userData();
		std::string getName();
		std::string getPass();
		int getBalance();
		int getRate();
		int deposit(int a);
		int withdraw(int a);
		void userLogin();
		template <typename ret> ret men();

};
#endif
