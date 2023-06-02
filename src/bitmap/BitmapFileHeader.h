/*
 * BitmapFileHeader.h
 *
 *  Created on: 2 jun 2023
 *      Author: Rikus
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace fractalproject {

struct BitmapFileHeader {
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffset;
};

}

#endif /* BITMAPFILEHEADER_H_ */
