//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include "pch.h"
Account::Account():
	m_accNumber(""),m_accName(""),m_balance(0.0){}
Account::Account(std::string x,std::string y,double z):
	m_accNumber(x),m_accName(y),m_balance(z){}
Account::Account(std::string x,std::string y):
	m_accNumber(x),m_accName(y){}
Account::Account(const Account &acc):
	m_accNumber(acc.m_accNumber),m_accName(acc.m_accName),m_balance(acc.m_balance){}
void Account::debit(double amt) {
	m_balance -= amt;
}
void Account::credit(double amt) {
	m_balance += amt;
}
std::string Account::getName() const {
	return m_accName;
}
std::string Account::getNumber() const {
	return m_accNumber;
}
double Account::getBalance() const {
	return m_balance;
}
void Account::display() const {
	std::cout << m_accNumber << "," << m_accName << "," << m_balance;
}

