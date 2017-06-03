#include <cmath>
#include <iostream>
#include "Triangle.h"
void calculatingVertices(std::vector<double>&copyX, std::vector<double>&copyY,double l);
// type 882 for best result
int main()
{
	double x0 = 300.0;
	double y0 = 240.0;
	double length;
	std::cout << "Give me length of tirangle" << std::endl;
	std::cin >> length;
	std::vector<double> copyX;
	std::vector<double> copyY;

	calculatingVertices(copyX,copyY,length);

	Triangle sierpinski(copyX, copyY, x0, y0);


	return 0;
}

void calculatingVertices(std::vector<double>&copyX, std::vector<double>&copyY,double l)
{
	double temp ;
	for (int i = 0; i < 3; i++)
	{
		temp = i*l*0.5;
		copyX.push_back(temp);
	}
	copyY.push_back(0.0);
	temp = l*sqrt(3.0)*0.5;
	copyY.push_back(temp);
	copyY.push_back(0.0);  


}