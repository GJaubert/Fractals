/*
 * BitmapInfoHeader.h
 *
 *  Created on: 2 jun 2023
 *      Author: Rikus
 */

#ifndef BITMAP_BITMAPINFOHEADER_H_
#define BITMAP_BITMAPINFOHEADER_H_


#include <cstdint>

using namespace std;

#pragma pack(2)

namespace fractalproject {

struct BitmapInfoHeader {
	int32_t headerSize{40};
	int32_t width;
	int32_t height;
	int32_t planes{1};
	int32_t bitsPerPixel{24};
	int32_t compression{0};
	int32_t dataSize{0};
	int32_t horizontalResolutin{2400};
	int32_t importantColors{0};
};

}

#endif /* BITMAP_BITMAPINFOHEADER_H_ */
