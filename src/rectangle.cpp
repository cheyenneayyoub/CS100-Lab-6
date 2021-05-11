#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle(int w, int h) : width(w), height(h) {
	if(w < 0 || h < 0) {
		w = 0;
		h = 0;
	}
}

void Rectangle::set_width(int w) { 
	this->width = w; 
}

void Rectangle::set_height(int h) { 
	this->height = h; 
}

int Rectangle::get_width() { 
	return width; 
}

int Rectangle::get_height() { 
	return height; 
}

int Rectangle::perimeter() {
	if(width < 0 || height < 0) {
                width = 0;
                height = 0;
        }
	return 2 * (width+height);
}

int Rectangle::area(){
	if(width < 0 || height < 0) {
                width = 0;
                height = 0;
        }
	return this->width * this->height;
} 
