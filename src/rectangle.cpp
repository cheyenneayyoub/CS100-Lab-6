#include "../header/rectangle.hpp"

Rectangle::Rectangle() : width(0), height(0) {}

Rectangle::Rectangle(int w, int h) : width(w), height(h) {}

void Rectangle::set_width(int w) { 
	width = w;
 }

void Rectangle::set_height(int h) { 
	height = h;
 }

int Rectangle::get_width() { 
	return width;
 }

int Rectangle::get_height() { 
	return height;
 }

//hardcoded wrong value instead of the formulas

int Rectangle::area() {
	return -1;
 } 

int Rectangle::perimeter(){
        return -1;
 }
