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

	FractalCreator fractalCreator(800, 600);
	fractalCreator.run("test.bmp");

	cout << "Finished";
	return 0;
}
