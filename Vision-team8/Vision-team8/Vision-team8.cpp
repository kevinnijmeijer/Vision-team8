// Vision-team8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ImageLoader.h"
#include <corona.h>

int _tmain(int argc, _TCHAR* argv[])
{
	ImageLoader I = ImageLoader();
	corona::Image* image = I.loadImage();
	I.saveImage(image);

	return 0;
}

