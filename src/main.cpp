//============================================================================
// Name        : fractal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <memory>
#include <math.h>
#include "./bitmap/Bitmap.h"
#include "Mandelbrot.h"
#include "./zoom/Zoom.h"
#include "./zoomlist/ZoomList.h"
#include "./fractalcreator/FractalCreator.h"

using namespace std;
using namespace fractal;

int main() {
	int const WIDTH = 800;
	int const HEIGHT = 600;

	FractalCreator fractalCreator(800, 600);

	fractalCreator.addZoom(Zoom(295, HEIGHT - 202, 0.1));
	fractalCreator.addZoom(Zoom(312, HEIGHT - 304, 0.1));
	fractalCreator.calculateIterations();
	fractalCreator.calculateTotalIterations();
	fractalCreator.drawFractal();
	fractalCreator.writeBitmap("test.bmp");

	cout << "Finished";
	return 0;
}
