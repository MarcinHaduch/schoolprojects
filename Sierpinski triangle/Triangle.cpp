#include "Triangle.h"
#include <allegro5/allegro.h>


	Triangle::Triangle(std::vector<double> temp_copyX, std::vector<double> temp_copyY, double temp_x0, double temp_y0):m_verticesCoordinate_x(temp_copyX), m_verticesCoordinate_y(temp_copyY),currentPointX(temp_x0),currentPointY(temp_y0)
	{
		for (int i = 0; i < 100000; i++) 
	calculatingNewPoints(currentPointX, currentPointY);
		
		
		drawing();
	}
	


	void Triangle::calculatingNewPoints(double startingPointX, double startingPointY)
	{
		int i = rand() % 3;

		double temp;
		temp = (startingPointX + m_verticesCoordinate_x[i]) / 2.0;
		m_startingPointCoordinate_x.push_back(temp);
		currentPointX = temp;
		temp = (startingPointY + m_verticesCoordinate_y[i]) / 2.0;
		m_startingPointCoordinate_y.push_back(temp);
		currentPointY = temp;
	}
	

	int Triangle::drawing()
	{

		ALLEGRO_DISPLAY *display = NULL;

		if (!al_init()) {
			fprintf(stderr, "failed to initialize allegro!\n");
			return -1;
		}

		display = al_create_display(1024, 768);
		al_draw_pixel(235, 256, al_map_rgb(4, 25, 220));
		if (!display) {
			fprintf(stderr, "failed to create display!\n");
			return -1;
		}

		al_clear_to_color(al_map_rgb(0, 0, 0));
		for (int i = 0; i < 100000; i++)
		al_draw_pixel(m_startingPointCoordinate_x[i], m_startingPointCoordinate_y[i], al_map_rgb(rand() % 255, rand() % 255, rand() % 255));

		al_flip_display();

		al_rest(10.0);

		al_destroy_display(display);

	}