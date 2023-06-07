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

using namespace std;
using namespace fractal;

int main() {
	int const WIDTH = 800;
	int const HEIGHT = 600;
	Bitmap bitmap(WIDTH, HEIGHT);

	double min = 999999;
	double max = -999999;

	ZoomList zoomList(WIDTH, HEIGHT);

	zoomList.add(Zoom(WIDTH / 2, HEIGHT / 2, 1));

	unique_ptr<int[]> histogram(new int[Mandelbrot::MAX_ITERATIONS]{0});
	unique_ptr<int[]> fractal(new int[WIDTH*HEIGHT]{0});

	for (int y = 0; y < HEIGHT; y++) {
		for (int x = 0; x < WIDTH; x++) {
			double xFractal = (x - WIDTH/2.0 - 200) / (HEIGHT/2.0);
			double yFractal = (y - HEIGHT/2.0) / (HEIGHT/2.0);

			int iterations = Mandelbrot::getIterations(xFractal, yFractal);

			fractal[y * WIDTH + x] = iterations;

			if (iterations != Mandelbrot::MAX_ITERATIONS) {
				histogram[iterations]++;
			}
		}
	}

	int total = 0;
	for (int i = 0; i < Mandelbrot::MAX_ITERATIONS; i++) {
		total += histogram[i];
	}

	for (int y = 0; y < HEIGHT; y++) {
			for (int x = 0; x < WIDTH; x++) {

				uint8_t red = 0;
				uint8_t green = 0;
				uint8_t blue = 0;

				int iterations = fractal[y * WIDTH + x];

				if (iterations != Mandelbrot::MAX_ITERATIONS) {
					double hue = 0.0;
						for (int i = 0; i <= iterations; i++) {
							hue += (double)histogram[i] / total;
						}

						green = pow(255, hue);
				}

				bitmap.setPixel(x, y, red, green, blue);
			}
	}

	bitmap.write("test.bmp");

	cout << "Finished";
	return 0;
}
