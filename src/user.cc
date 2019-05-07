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
		sleep(10);
	}else{
		std::cout << "Login denied" << std::endl;
		sleep(10);
	}
}	

