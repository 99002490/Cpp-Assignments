#include "pch.h"

TEST(Account, DefConst) {
	Account a;
	EXPECT_EQ("", a.getNumber());
	EXPECT_EQ("", a.getName());
	EXPECT_EQ(0.0, a.getBalance());
}
TEST(Account, ParamConstFor3Parameters) {
	Account a("100","Rak",5000);
	EXPECT_STREQ("100", a.getNumber().c_str());
	EXPECT_STREQ("Rak", a.getName().c_str());
	EXPECT_EQ(5000.0, a.getBalance());
}
TEST(Account, ParamConstFor2Parameters) {
	Account a("100", "Rak");
	EXPECT_STREQ("100", a.getNumber().c_str());
	EXPECT_STREQ("Rak", a.getName().c_str());
}
TEST(Account, CopyConst) {
	Account a("100", "Rak", 5000);
	Account a1 = a;
	EXPECT_STREQ("100", a.getNumber().c_str());
	EXPECT_STREQ("Rak", a.getName().c_str());
	EXPECT_EQ(5000.0, a.getBalance());
}
TEST(Account, CreditTest) {
	Account a("100", "Rak",1500);
	a.credit(1500.0);
	EXPECT_EQ(3000.0, a.getBalance());
}
TEST(Account, DebitTest) {
	Account a("100", "Rak", 1500);
	a.debit(0.0);
	EXPECT_EQ(1500.0, a.getBalance());
}
TEST(Account, Display) {
	Account a("100", "Rak", 1500);
	std::string expectation = "100,Rak,1500";
	testing::internal::CaptureStdout();
	a.display();
	std::string reality = testing::internal::GetCapturedStdout();
	EXPECT_STREQ(expectation.c_str(), reality.c_str());
}