#include "Receipt.h"



int main() {
	Receipt today(4,5);
	Receipt tomorrow(3, 2);
	today.ShowMoney();

	today.operator+(500);
	today.line();
	today.ShowMoney();

	today.operator-(500);
	today.line();
	today.ShowMoney();


	Receipt ba=today+tomorrow;
	//balance accout
	//today.operator+(tomorrow);
	//��������� ȣ���� ��
	today.line();
	ba.ShowMoney();

	Receipt test = today - tomorrow;
	//today.operator-(tomorrow);
	//��������� ȣ���� ��
	today.line();
	test.ShowMoney();


	Receipt p(1, 3);
	++p;
	p.ShowMoney();


	--p;
	p.ShowMoney();

	++(++p);
	p.ShowMoney();

	--(--p);
	p.ShowMoney();




	getchar();
	return 0;
}