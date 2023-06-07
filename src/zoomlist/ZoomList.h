/*
 * ZoomList.h
 *
 *  Created on: 7 jun 2023
 *      Author: Rikus
 */

#ifndef ZOOMLIST_ZOOMLIST_H_
#define ZOOMLIST_ZOOMLIST_H_

#include "../zoom/Zoom.h"
#include <vector>
#include <utility>
#include <iostream>

namespace fractal {

class ZoomList {
private:
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1.0};

	int m_width{0};
	int m_height{0};
	std::vector<Zoom> zooms;

public:
	ZoomList(int width, int  height);
	void add (const Zoom& zoom);
	std::pair<double, double> doZoom(int x, int y);
	virtual ~ZoomList();
};

} /* namespace fractal */

#endif /* ZOOMLIST_ZOOMLIST_H_ */
