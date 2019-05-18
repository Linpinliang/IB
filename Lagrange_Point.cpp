#include "Lagrange_Point.h"


/*
Lagrange_Point::Lagrange_Point()
{
}
*/
Lagrange_Point::Lagrange_Point(double x, double y)
{
	Set_Position(x, y);
	Set_ub_vb_noF(0, 0);
	Set_Ub_Vb(0, 0);
	Set_F(0, 0);
}



//multi_mothod_constructor
Lagrange_Point::Lagrange_Point(double x, double y, int NF)
{
	Set_Position(x, y);
	Set_ub_vb_noF(0, 0);
	Set_Ub_Vb(0, 0);
	Set_F(0, 0);
	

	//NF parameter
	_NF = NF;	

	_NF_Fx = vector<double>(_NF);
	_Nf_Fy = vector<double>(_NF);

	_NF_ub = vector<double>(_NF);
	_NF_vb = vector<double>(_NF);







}

void Lagrange_Point::Set_Position(double x, double y)
{
	_x = x;
	_y = y;
}

void Lagrange_Point::Set_ub_vb_noF(double ub_noF, double vb_noF)
{
	_ub_noF = ub_noF;
	_vb_noF = vb_noF;
}

void Lagrange_Point::Set_Ub_Vb(double Ub, double Vb)
{
	_Ub = Ub;
	_Vb = Vb;

}

void Lagrange_Point::Set_F(double Fx, double Fy)
{
	_Fx = Fx;
	_Fy = Fy;
}

void Lagrange_Point::Set_NF(int nf)
{
	_NF = nf;
}

void Lagrange_Point::Set_NF_ub_vb(double ub, double vb, int m)
{
	_NF_ub[m] = ub;
	_NF_vb[m] = vb;
}

void Lagrange_Point::Set_NF_F(double Fx, double Fy, int m)
{
	_NF_Fx[m] = Fx;
	_Nf_Fy[m] = Fy;
}



double Lagrange_Point::Get_Position_x()
{
	return _x;
}

double Lagrange_Point::Get_Position_y()
{
	return _y;
}

double Lagrange_Point::get_ub_nof()
{
	return _ub_noF;
}

double Lagrange_Point::get_vb_nof()
{
	return _vb_noF;
}

double Lagrange_Point::Get_Ub()
{
	return _Ub;
}

double Lagrange_Point::Get_Vb()
{
	return _Vb;
}

double Lagrange_Point::Get_Fx()
{
	return _Fx;
}

double Lagrange_Point::Get_Fy()
{
	return _Fy;
}





//multi method
double Lagrange_Point::Get_NF_ub(int m)
{
	return _NF_ub[m];
}

double Lagrange_Point::Get_NF_vb(int m)
{
	return _NF_vb[m];
}

double Lagrange_Point::Get_NF_Fx(int m)
{
	return _NF_Fx[m];
}

double Lagrange_Point::Get_NF_Fy(int m)
{
	return _Nf_Fy[m];
}

int Lagrange_Point::Get_NF_size()
{
	return _NF_ub.size();
}





Lagrange_Point::~Lagrange_Point()
{
}
