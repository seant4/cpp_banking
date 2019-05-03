#include <iostream>
#include "../inc/user.h"

User::User(std::string n, std::string p, int b, int r){
	name = n;
	password = p;
	balance = b;
	rate = r;
}

std::string User::userData(){
	return "Name: ";
}

