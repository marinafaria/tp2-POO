#include "Tempo.h"
using namespace std;

Tempo::Tempo() {
	dia = 0;
	hora = 0;
	min = 0;
	seg = 0;
}

Tempo::Tempo(int d, int h, int m, int s) {
	dia = d;
	hora = h;
	min = m;
	seg = s;
	consist();
}

Tempo::~Tempo() {
	dia = 0;
	hora = 0;
	min = 0;
	seg = 0;
}

void Tempo::consist() {
	while (seg > 59) {
		seg -= 59;
		min += 1;
	}
	while (min > 59) {
		min -= 59;
		hora += 1;
	}
	while (hora > 23) {
		hora -= 23;
		dia += 1;
	}
}

int Tempo::getDia() const {
	return dia;
}

int Tempo::getHora() const {
	return hora;
}

int Tempo::getMin() const {
	return min;
}

int Tempo::getSeg() const {
	return seg;
}

Tempo Tempo::operator+(const Tempo& t) {
	this->seg += t.seg;
	this->min += t.min;
	this->hora += t.hora;
	this->dia += t.dia;
	this->consist();
	return *this;
}

void Tempo::print() {
	consist();
	cout << dia << " Dias " << hora << "h:" << min << "m:" << seg << "s" << endl;
}

void Tempo::addSeg(){
	this->seg += 1;
	this->consist();
}
