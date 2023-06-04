/*
 * Mandelbrot.h
 *
 *  Created on: 4 jun 2023
 *      Author: Rikus
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace fractal {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;

	Mandelbrot();
	virtual ~Mandelbrot();

	static int getIterations(double x, double y);
};

} /* namespace fractal */

#endif /* MANDELBROT_H_ */
