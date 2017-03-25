#include <iostream>
using namespace std;

/*
Funcion que calcula la cantidad a pagar por concepto de estacionamiento
    de 1 a 5 horas, la hora cuesta $10
    de 6 a 10 horas, la hora cuesta $9
    por mas de 10 horas el costo es de $7
*/
float pago_estacionamiento(int horas)
{
	int cant(0);
	if (horas>=0 && horas<=5)
		cant = horas*10;
	if (horas>=6 && horas<=10)
		cant = horas*9;
	if (horas>11)
		cant = horas*7;

	return cant;
}

void casos_de_prueba(){

    cout << "TEST CASES" << endl;
    cout <<"test data/-1/ expected result $0/ <<pago_estacionamiento;
    cout <<"test data/3/ expected result $30/ <<pago_estacionamiento;
    cout <<"test data/8/ expected result $72/ <<pago_estacionamiento;
    cout <<"test data/12/ expected result $84/ <<pago_estacionamiento;
    cout <<"test data/0/ expected result $0/ <<pago_estacionamiento;
    cout <<"test data/1/ expected result $10/ <<pago_estacionamiento;
    cout <<"test data/5/ expected result $50/ <<pago_estacionamiento;
    cout <<"test data/6/ expected result $54/ <<pago_estacionamiento;
    cout <<"test data/10/ expected result $70/ <<pago_estacionamiento;
    cout <<"test data/11/ expected result $77/ <<pago_estacionamiento;



    cout << endl;

}

int main()
{

    casos_de_prueba();

	return 0;
}
