/*
** EPITECH PROJECT, 2022
** B-YEP-400-NAN-4-1-indiestudio-alexandre.tomasin
** File description:
** Images
*/

#pragma once

#include "raylib.hpp"
#include <string>

namespace indie
{
  class Images {
    public:
      Images(const std::string &filepath);
      ~Images();

      void unload();
      Images &reload(const std::string &filepath);

      Image &getImage();

    private:
      std::string _filepath;
      Image _image;
  };
  
}