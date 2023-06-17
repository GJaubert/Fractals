/*
 * RGB.cpp
 *
 *  Created on: 8 jun 2023
 *      Author: Rikus
 */

#include "RGB.h"

namespace fractal {

RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {
	// TODO Auto-generated constructor stub

}

RGB operator-(const RGB& first, const RGB& second) {
	return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
}
} /* namespace fractal */
