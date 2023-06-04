/*
 * Bitmap.cpp
 *
 *  Created on: 2 jun 2023
 *      Author: Rikus
 */

#include <fstream>
#include "Bitmap.h"
#include "BitmapInfoHeader.h"
#include "BitmapFileHeader.h"

using namespace fractal;
using namespace std;

namespace fractal {

Bitmap::Bitmap(int width, int height): m_width(width), m_height(height), m_pPixels(new uint8_t[width*height*3]{}) {
	// TODO Auto-generated constructor stub

}

bool Bitmap::write(string filename) {

	BitmapFileHeader fileHeader;
	BitmapInfoHeader infoHeader;

	fileHeader.fileSize = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader) + m_width * m_height * 3;
	fileHeader.dataOffset = sizeof(BitmapFileHeader) + sizeof(BitmapInfoHeader);

	infoHeader.width = m_width;
	infoHeader.height = m_height;

	fstream file;

	file.open(filename, ios::out|ios::binary);
	if (!file) {
		return false;
	}

	file.write((char *)&fileHeader, sizeof(fileHeader));
	file.write((char *)&infoHeader, sizeof(infoHeader));
	file.write((char *)m_pPixels.get(), m_width * m_height * 3);

	file.close();
	if (!file) {
		return false;
	}
	return true;
}

Bitmap::~Bitmap() {
	// TODO Auto-generated destructor stub
}

} /* namespace fractalproject */
