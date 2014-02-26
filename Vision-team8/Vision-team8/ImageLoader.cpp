#include "stdafx.h"
#include "ImageLoader.h"
#include <iostream>
#include <corona.h>


ImageLoader::ImageLoader()
{
}


ImageLoader::~ImageLoader()
{
}

corona::Image* ImageLoader::loadImage(){
	corona::Image* image = corona::OpenImage("images/test.png");
	if (!image){
		std::cout << "Image does not exist";
	}
	return image;
}

void ImageLoader::saveImage(corona::Image* image){
	corona::SaveImage("images/testout.png", corona::FF_PNG, image);
}
