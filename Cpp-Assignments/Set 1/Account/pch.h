//
// pch.h
// Header for standard system include files.
//

#pragma once

#include "gtest/gtest.h"
#ifndef __ACCOUNT_H
#define __ACCOUNT_H

#include<string>

class Account {
	std::string m_accNumber;
	std::string m_accName;
	double m_balance;
public:
	Account();
	Account(std::string, std::string, double);
	Account(std::string, std::string);
	Account(const Account&);
	void debit(double);
	void credit(double);
	double getBalance() const;
	std::string getName() const;
	std::string getNumber() const;
	void display() const;
};

#endif
