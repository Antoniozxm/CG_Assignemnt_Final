#pragma once

#include <stdio.h>

#pragma warning(disable:4996)

struct Image
{
	unsigned long sizeX;
	unsigned long sizeY;
	char* data;
};

int ImageLoad(const char* filename, Image* image)
{
	FILE* file;
	unsigned long size; //size of the image in bytes
	unsigned long i; //standard counter
	unsigned short int planes; //number of planes in Image(must be 1)
	unsigned short int bpp; //number of bits per pixel(must be 24)
	char temp; //temporary color storage for bgr-rgb conversion

	//make sure the file in here
	file = fopen(filename, "rb");
	if (file == NULL)
	{
		printf("Can't open file!");
	}

	//seek through the bmp header, up to width/height
	fseek(file, 18, SEEK_CUR);

	//read the width
	i = fread(&image->sizeX, 4, 1, file);
	//read the height
	i = fread(&image->sizeY, 4, 1, file);
	//calculate the size (assuming 24 bits or 3 bytes per pixel)
	size = image->sizeX * image->sizeY * 3;
	//read the plane
	fread(&planes, 2, 1, file);
	//read the bits per pixel
	fseek(file, 24, SEEK_CUR);
	//read the data
	image->data = (char*)malloc(size);

	i = fread(image->data, size, 1, file);

	for (i = 0; i < size; i += 3) //reverse all ol color bgr -> rgb
	{
		temp = image->data[i];
		image->data[i] = image->data[i + 1];
		image->data[i + 1] = temp;

	}

	fclose(file);
	//we're done
	return 1;

}