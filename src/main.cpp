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
#include "./rgb/RGB.h"

using namespace std;
using namespace fractal;

int main() {

	RGB rgb1(4, 5, 6);
	RGB rgb2(1, 2, 3);

	RGB rgb3 = rgb1 - rgb2;

	cout << rgb3.r << rgb3.g << rgb3.b << endl;

	FractalCreator fractalCreator(800, 600);
	fractalCreator.run("test.bmp");

	cout << "Finished";
	return 0;
}
