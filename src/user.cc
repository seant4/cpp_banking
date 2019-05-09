#include <iostream>
#include "../inc/user.h"
#include <stdlib.h>
#include <unistd.h>


User::User(std::string n, std::string p, int b, int r){
	name = n;
	password = p;
	balance = b;
	rate = r;
}

std::string User::userData(){
	return "user";
}

std::string User::getName(){
	return name;
}
std::string User::getPass(){
	return password;
}
int User::getBalance(){
	return balance;
}
int User::getRate(){
	return rate;
}
void User::userLogin(){
	sleep(2);
	system("clear");
	std::cout << "Please enter password: " << std::endl;
	std::string p = " ";
	std::cout << "$> ";
	std::cin >> p;	
	if(p.compare(getPass()) == 0){
		std::cout << "Login Successfull" << std::endl;
		men<int>();
	}else{
		std::cout << "Login denied" << std::endl;
	}
}

template <typename ret> ret User::men(){
	system("clear");
	std::cout << "Welcome, ";
	std::cout << getName() << std::endl;
	char in = '0';
	std::cout << "1. List Info" << std::endl;
	std::cout << "2. Withdraw" << std::endl;
	std::cout << "3. Deposit" << std::endl;
	std::cout << "4. Exit" << std::endl;
	std::cin >> in;
	switch(int(in)){
		case '1':
			system("clear");
			std::cout << "Name: ";
			std::cout << getName() << std::endl;
			std::cout << "Balance: ";
			std::cout << getBalance() << std::endl;
			std::cout << "Rate: ";
			std::cout << getRate() << std::endl;
			sleep(5);
			men<int>();
		case '2':
			withdraw();
		case '3':
			deposit();
		case '4':
			return 0;
	}
	return 0;
}

void User::withdraw(){
	system("clear");
	std::cout << "Enter Amount: " << std::endl;
	std::string in = " ";
	std::cout << "$> ";
	std::cin >> in;
	if(std::stoi(in) > balance){
		std::cout << "Invalid"; 
		sleep(5);
		men<int>();
	}else{
		balance = balance - std::stoi(in);
		std::cout << "New balance: ";
		std::cout << balance;
		sleep(5);
		men<int>();
	}
}

void User::deposit(){
	std::cout << "Enter Amount: " << std::endl;
	std::string in = " ";
	std::cout << "$> ";
	std::cin >> in;
	balance = balance + std::stoi(in);
	system("clear");
	std::cout << "New Balance: ";
	std::cout << balance;
	sleep(5);
	men<int>();
}


