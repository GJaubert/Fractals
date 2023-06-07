/*
 * Zoom.h
 *
 *  Created on: 7 jun 2023
 *      Author: Rikus
 */

#ifndef ZOOM_ZOOM_H_
#define ZOOM_ZOOM_H_

namespace fractal {

struct Zoom {
	int x{0};
	int y{0};
	double scale{0.0};
	Zoom(int x, int y, double scale): x(x), y(y), scale(scale) {};
};

} /* namespace fractal */

#endif /* ZOOM_ZOOM_H_ */
