//============================================================================
// Name        : fractal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "./bitmap/BitmapFileHeader.h"
#include "./bitmap/BitmapInfoHeader.h"
#include "./bitmap/Bitmap.h"

using namespace std;
using namespace fractal;

int main() {
	Bitmap bitmap(800, 600);

	bitmap.write("test.bmp");
	cout << "Finished" << endl; // prints !!!Hello World!!!
	return 0;
}
