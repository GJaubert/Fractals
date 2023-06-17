/*
 * RGB.h
 *
 *  Created on: 8 jun 2023
 *      Author: Rikus
 */

#ifndef RGB_RGB_H_
#define RGB_RGB_H_

namespace fractal {

struct RGB {
	double r;
	double g;
	double b;

	RGB(double r, double g, double b);
};

RGB operator-(const RGB& first, const RGB& second);

} /* namespace fractal */

#endif /* RGB_RGB_H_ */
