/*
 * FractalCreator.h
 *
 *  Created on: 8 jun 2023
 *      Author: Rikus
 */

#ifndef FRACTALCREATOR_FRACTALCREATOR_H_
#define FRACTALCREATOR_FRACTALCREATOR_H_

#include <string>
#include <memory>
#include "../zoom/Zoom.h"
#include "../bitmap/Bitmap.h"
#include "../zoomlist/ZoomList.h"
#include "../Mandelbrot.h"
#include "../rgb/RGB.h"

namespace fractal {

class FractalCreator {
private:
	int m_width;
	int m_height;
	std::unique_ptr<int[]> m_histogram;
	std::unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total{0};

	vector<int> m_ranges;
	vector<RGB> m_colors;
	vector<int> m_rangeTotals;

	bool m_bGotFirstRange{false};

private:
	void calculateIterations();
	void calculateTotalIterations();
	void calculateRangeTotals();
	void drawFractal();
	void writeBitmap(std::string name);
	int getRange(int iterations) const;

public:
	FractalCreator(int width, int height);

	void run(string name);
	void addZoom(const Zoom& zoom);
	void addRange(double rangeEnd, const RGB& rgb);
};

} /* namespace fractal */

#endif /* FRACTALCREATOR_FRACTALCREATOR_H_ */
