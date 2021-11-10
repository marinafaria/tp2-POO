#include <iostream>


using namespace std;
class Tempo {
	private:
		int dia; //numero de dias
		int hora; //contagem de horas 0 - 23h
		int min; //minutos 0-60
		int seg; //segundos 0-60
		void consist();
	public:
		//inicializadores
		Tempo();
		Tempo(int d = 0, int h=0, int m=0, int s=0);
		~Tempo();

		//getters
		int getDia() const;
		int getHora() const;
		int getMin() const;
		int getSeg() const;

		//operadores
		Tempo operator+(const Tempo& t);

		//print
		void print();

		//other methods
		void addSeg();
};

