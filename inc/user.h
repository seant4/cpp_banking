#ifndef USER_H
#define USER_H

class User{
	public:
		std::string name;
		std::string password;
		int balance;
		int rate;

		User(std::string n, std::string p, int b, int r);
		std::string userData();
};
#endif
