/*
 * BitmapFileHeader.h
 *
 *  Created on: 2 jun 2023
 *      Author: Rikus
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

struct BitmapFileHeader {
	char header[2]{'B', 'M'};
	int fileSize;
};



#endif /* BITMAPFILEHEADER_H_ */
