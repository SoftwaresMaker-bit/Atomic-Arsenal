
#ifndef WEAPON_H
#define WEAPON_H
#include <iostream>
#include <string>
using namespace std;


class Weapon {


protected:
	string name;
	double dp;
	string chemistry;

public:
	Weapon(string _name,double _dp,string _chemistry);
	string get_name();
	double get_dp();
	string get_chemistry();
	void set_info(string _name,double _dp, string _chemistry);
	string get_info(); //Gets all the atributes in a string 




};
#endif
