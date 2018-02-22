#include <iostream>
using std::cout;
using std::endl;

class Receipt {
private:
	int cm,um;
public:
	Receipt(int cm,int um): cm(cm),um(um) {}
	void ShowMoney();
	void line();
	void operator+(int val);
	void operator-(int val);
	Receipt operator+(const Receipt& );
	friend Receipt operator-(const Receipt& td, const Receipt& tmr);
	Receipt operator++();
	friend Receipt& operator--(Receipt& p);
};


