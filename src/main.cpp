//============================================================================
// Name        : fractal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "./zoom/Zoom.h"
#include "./fractalcreator/FractalCreator.h"
#include "./rgb/RGB.h"

using namespace std;
using namespace fractal;

int main() {



	FractalCreator fractalCreator(800, 600);
	fractalCreator.addZoom(Zoom(295, 202, 0.1));
	fractalCreator.addZoom(Zoom(312, 304, 0.1));
	fractalCreator.run("test.bmp");

	cout << "Finished";
	return 0;
}
