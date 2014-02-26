#pragma once
class ImageLoader
{
public:
	ImageLoader();
	~ImageLoader();

	corona::Image* loadImage();
	void saveImage(corona::Image*);
};

