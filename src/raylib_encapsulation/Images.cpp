/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Images
*/

#include "Images.hpp"

using namespace indie;

Images::Images(const std::string &filepath) : _filepath(filepath)
{
  _image = LoadImage(_filepath.c_str());
}

Images::~Images()
{

}

void Images::unload()
{
  if (_image.data != nullptr) {
    UnloadImage(this->_image);
    _image.data = nullptr;
  }
}

Images &Images::reload(const std::string &filepath)
{
  _filepath = filepath;
  _image = LoadImage(_filepath.c_str());
  return (*this);
}

Image &Images::getImage()
{
  return (_image);
}
