#include "Receipt.h"

void Receipt::ShowMoney() {
	cout << "현재금액:" <<cm << "\n사용금액:" << um <<endl;
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
//멤버 함수
Receipt Receipt::operator+(const Receipt& p) {
	Receipt temp(cm + p.cm, um + p.um);
	return temp;
}

//멤버 함수
Receipt Receipt::operator++() {
	cm++;
	um++;
	return *this;
}
//전역 함수
Receipt operator-(const Receipt& td, const Receipt& tmr) {
	Receipt temp(td.cm-tmr.cm,td.um-tmr.um);
	return temp;
}
//전역 함수
Receipt& operator--(Receipt& p) {
	p.cm--;
	p.um--;
	return p;
}
