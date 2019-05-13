#include <iostream>
#include <stdlib.h>
#include <unistd.h>
#include "../inc/user.h"
#include <vector>
const std::string admin_pass = "password";

void addUser(std::vector<User> &l){
	system("clear");
	std::string n;
	std::cout << "Users name: " << std::endl;
	std::cin >> n;
	std::string p;
	std::cout << "Set password: " << std::endl;
	std::cin >> p;
	double b;
	std::cout << "Balance: " << std::endl;
	std::cin >> b;
	int r;
	std::cout << "Rate: " << std::endl;
	std::cin >> r;
	l.push_back(User(n,p,b,r));
}

void listUsers(std::vector<User> &l){
	char input = ' ';
	system("clear");
	sleep(1);
	std::cout << "Users are: " << std::endl;
	for(int i = 0; i < l.size(); i++){
		std::cout << i;
		std::cout << ") ";
		std::cout << l[i].getName() << std::endl;
	}
	std::cout << "Log in to which user num" << std::endl;
	std::cin >> input;
	for(int i = 0; i < l.size(); i++){
		if(i == ((int)input - 48)){
			l[i].userLogin();
		}
	}
}

void menu(std::vector<User> &l){
	system("clear");	
	char input = '0';
	std::string in = "   ";
	std::cout << "Welcome!" << std::endl;
	std::cout << "1. List Users" << std::endl;
	std::cout << "2. Add Users" <<std::endl;
	std::cout << "$> ";
	std::cin >> input;
	switch((int)input){
		case '1':
			listUsers(l);
			menu(l);
		case '2':	
			std::cout << "Admin Password: " << std::endl;
			std::cout << "$> ";
			std::cin >> in;
			if(admin_pass.compare(in)==0){
				addUser(l);
				menu(l);
			}else{
				std::cout << "Incorrect" << std::endl;
			}
			addUser(l);
			menu(l);
		case '3':
			exit(6);
	}
}

int main(){
	std::vector<User> users;
	menu(users);
	return 0;
}

