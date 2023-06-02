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
using namespace std;

namespace fractalproject {

class Bitmap {
private:
	int m_width{0};
	int m_height{0};
public:
	Bitmap(int m_width, int m_height);

	void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
	bool write(string filename);

	virtual ~Bitmap();
};

} /* namespace fractalproject */

#endif /* BITMAP_H_ */
