/*
 * Mandelbrot.cpp
 *
 *  Created on: 4 jun 2023
 *      Author: Rikus
 */

#include "Mandelbrot.h"
#include <complex>

using namespace std;

namespace fractal {

Mandelbrot::Mandelbrot() {
	// TODO Auto-generated constructor stub

}

int Mandelbrot::getIterations(double x, double y) {

	complex<double> z = 0;
	complex<double> c(x, y);

	int iterations = 0;

	while (iterations < MAX_ITERATIONS) {
		z = z * z + c;

		if (abs(z) > 2) {
			break;
		}
		iterations++;
	}

	return iterations;
}

Mandelbrot::~Mandelbrot() {
	// TODO Auto-generated destructor stub
}

} /* namespace fractal */
