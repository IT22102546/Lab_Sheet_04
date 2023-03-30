#include<iostream>
#include<iomanip>

using namespace std;



struct circle
{
	float radius;
	
}circle1;

struct Rectangle
{
	float length;
	float width;
	
}rec1,recOut;

struct square
{
	float length;
	
}sqr1;

float RecArea(Rectangle r);
float SqrArea(square s);
float CircleArea(circle c);
float FenceCost(float &length, float &width);

int main()
{
	float Carea,Rarea,Sarea,totobArea,RemLarea, Larea,cost;
	
	cout<<"Enter radius of the cirle: ";
	cin>>circle1.radius;
	
	Carea=CircleArea(circle1);
	cout<<"Area Of the Circle : "<<setiosflags(ios::fixed)<<setprecision(3)<<Carea;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter length of the Rectangle: ";
	cin>>rec1.length;
	cout<<"Enter Width of the Rectangle: ";
	cin>>rec1.width;
	
	Rarea=RecArea(rec1);
	cout<<"Area Of the Rectangle : "<<setiosflags(ios::fixed)<<setprecision(3)<<Rarea;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"Enter length of the Square: ";
	cin>>sqr1.length;
	
	Sarea=SqrArea(sqr1);
	cout<<"Area Of the Square : "<<setiosflags(ios::fixed)<<setprecision(3)<<Sarea;
	
	cout<<endl;
	cout<<endl;
	
	totobArea=Sarea+Rarea+Carea;
	
	cout<<"Enter length of the Land: ";
	cin>>recOut.length;
	cout<<"Enter Width of the Land: ";
	cin>>recOut.width;
	
	Larea=RecArea(recOut);
	
	RemLarea=Larea-totobArea;
	
	cout<<endl;
	cout<<"Area Of the Remaining Land : "<<setiosflags(ios::fixed)<<setprecision(3)<<RemLarea;
	
	cout<<endl;
	cost=FenceCost(recOut.length,recOut.length);
	cout<<"Price for Fence : Rs."<<setiosflags(ios::fixed)<<setprecision(3)<<cost;
}

float CircleArea(circle C)
{
	 float Carea=22.0/7*circle1.radius*circle1.radius;
	  return Carea;
}

float RecArea(Rectangle r)
{
	float Rarea;
	
	Rarea=(r.length*r.width);
	
	return Rarea;
}

float SqrArea(square S)
{
	float Sarea;
	
	Sarea=sqr1.length*sqr1.length;
	
	return Sarea;
}

float FenceCost(float &length, float &width)
{
	float cost;
	
	cost=(2*length)+(2*width);
	
	return cost;
}
