/*
 * ZoomList.cpp
 *
 *  Created on: 7 jun 2023
 *      Author: Rikus
 */

#include "ZoomList.h"

namespace fractal {

ZoomList::ZoomList(int width, int  height): m_width(width), m_height(height) {
	// TODO Auto-generated constructor stub

}

ZoomList::~ZoomList() {
	// TODO Auto-generated destructor stub
}

void ZoomList::add (const Zoom& zoom) {
	zooms.push_back(zoom);

	m_xCenter += (zoom.x - m_width / 2) * m_scale;
	m_yCenter += -(zoom.y - m_height / 2) * m_scale;

	m_scale *= zoom.scale;
}

std::pair<double, double> ZoomList::doZoom(int x, int y) {
	double xFractal = (x - m_width/2) * m_scale + m_xCenter;
	double yFractal = (y - m_height/2) * m_scale + m_yCenter;

	return std::pair<double, double>(xFractal, yFractal);
}

} /* namespace fractal */
