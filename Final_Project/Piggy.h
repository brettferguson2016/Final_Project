#pragma once 

class PiggyBank {
public:
	bool GetAmount();
	bool SetAmount();
	bool GetTotal();
	bool SetTotal();
private:
	bool cash;
};