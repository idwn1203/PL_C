#include "Receipt.h"

void Receipt::ShowMoney() {
	cout << "����ݾ�:" <<cm << "\n���ݾ�:" << um <<endl;
}
void Receipt::line() {
	puts("-----------------");
}
void Receipt :: operator+(int val) {
	cm += val;
	um += val;
}
void Receipt :: operator-(int val) {
	cm += val;
	um += val;
}
//��� �Լ�
Receipt Receipt::operator+(const Receipt& p) {
	Receipt temp(cm + p.cm, um + p.um);
	return temp;
}

//��� �Լ�
Receipt Receipt::operator++() {
	cm++;
	um++;
	return *this;
}
//���� �Լ�
Receipt operator-(const Receipt& td, const Receipt& tmr) {
	Receipt temp(td.cm-tmr.cm,td.um-tmr.um);
	return temp;
}
//���� �Լ�
Receipt& operator--(Receipt& p) {
	p.cm--;
	p.um--;
	return p;
}
