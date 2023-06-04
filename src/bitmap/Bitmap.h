/*
 * Bitmap.h
 *
 *  Created on: 2 jun 2023
 *      Author: Rikus
 */

#ifndef BITMAP_H_
#define BITMAP_H_

#include <string>
#include <cstdint>
#include <memory>
using namespace std;

namespace fractal {

class Bitmap {
private:
	int m_width{0};
	int m_height{0};
	unique_ptr<uint8_t[]> m_pPixels{nullptr};
public:
	Bitmap(int m_width, int m_height);

	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	bool write(string filename);

	virtual ~Bitmap();
};

} /* namespace fractalproject */

#endif /* BITMAP_H_ */
