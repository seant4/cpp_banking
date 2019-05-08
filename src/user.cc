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
	std::string in = " ";
	std::cout << "Actions" << std::endl;
	std::cin >> in;
	if(in.compare("info")==0){
		system("clear");
		std::cout << "Name: ";
		std::cout << getName() << std::endl;
		std::cout << "Balance: ";
		std::cout << getBalance() << std::endl;
		std::cout << "Rate: ";
		std::cout << getRate() << std::endl;
		sleep(5);
		men<int>();
	}else{
		std::cout << getBalance() << std::endl;
		sleep(5);
	}
	return 0;
}

