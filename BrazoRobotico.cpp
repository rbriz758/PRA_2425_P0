#include "BrazoRobotico.h"
#include <iostream>


using namespace std;

BrazoRobotico::BrazoRobotico(double x1,double y1,double z1):x{x1}, y{y1}, z{z1},sujecion{false}{}


double BrazoRobotico::get_x(){

		return x;}

double BrazoRobotico::get_y(){

		return y;}

double BrazoRobotico::get_z(){

		return z;}

bool BrazoRobotico::get_sujecion(){

		return sujecion;}

void BrazoRobotico::mover(double newx, double newy, double newz){

	x=newx;
	y=newy;
	z=newz;
	cout << "El robot se ha movido a las coordenadas (" << x << ", " << y << ", " << z << ").\n";
}


void BrazoRobotico::coger(){

	sujecion=true;
	cout<<"El robot ha cogido el objeto";
}


void BrazoRobotico::soltar(){

	sujecion=false;
	cout<<"El robot ha soltado el objeto";

}
