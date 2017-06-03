#pragma once
#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <vector>


class Triangle
{ 
public:
	Triangle(std::vector<double>,std::vector<double>,double,double);
		~Triangle()=default;


		void calculatingNewPoints(double,double);
		
		int drawing(void);

private:

	std::vector<double> m_verticesCoordinate_x, m_verticesCoordinate_y;
	std::vector<double> m_startingPointCoordinate_x, m_startingPointCoordinate_y;
	double currentPointX, currentPointY;
		
};
#endif