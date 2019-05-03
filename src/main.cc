#include <iostream>
#include "../inc/user.h"

int main(){
	std::string input;
	std::cout << "Welcome!" << std::endl;
	std::cout << "1. List Users" << std::endl;
	std::cout << "2. Remove Users" <<std::endl;
	User* sean = new User("Sean", "jkl", 5, 6);
	std::cout << sean->userData() << std::endl;
	std::cout << sean->name << std::endl;
	delete sean;
	return 0;
}

