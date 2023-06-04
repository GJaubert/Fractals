//============================================================================
// Name        : fractal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "./bitmap/Bitmap.h"

using namespace std;
using namespace fractal;

int main() {
	int const WIDTH = 800;
	int const HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 999999;
	double max = -999999;

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (x - WIDTH/2.0) / (WIDTH/2.0);
			double yFractal = (y - HEIGHT/2.0) / (HEIGHT/2.0);

			if (xFractal < min) min = xFractal;
			if (xFractal > max) max = xFractal;
		}
	}
	bitmap.setPixel(WIDTH/2, HEIGHT/2, 255, 255, 255);

	bitmap.write("test.bmp");

	cout << min << " " << max << endl; // prints !!!Hello World!!!
	return 0;
}
