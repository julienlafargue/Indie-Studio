# Indie-Studio [![License](https://img.shields.io/github/license/MisterPeModder/Arcade)](https://github.com/MisterPeModder/Arcade)
This project was carried out as part of my course to epitech over a period of four weeks in group of six.

## The game
The goal was to reproduce the iconic games called bomberman. 
This game consists of playing a small character who has the ability to plant bombs to destroy crates or kill his opponents. The last survivor wins ! The games can be played from two to four players. 

![indie](https://user-images.githubusercontent.com/72009611/219130579-f6174e5c-19cd-430f-921f-9040990e8049.png)

## Building

### Command Line (via CMake)

Required tools:
- CMake 3.17 (minimum)

on Linux:
```sh
# Create the build directory
mkdir build && cd build 

# Configure the project
cmake .. -G 'Unix Makefiles' -DCMAKE_BUILD_TYPE=Release

# Build the executable and libraries
cmake --build .

# Return to previous directory
cd -
```

## Local Docs

Required tools:
- Doxygen

on Linux:
```sh
# Run at the root of the project
doxygen

# Open the genrated pages
xdg-open doc/generated/html/index.html
```

## Groups

| Group |
|--------------------------------------------------|
| Alexandre Tomasin <alexandre.tomasin@epitech.eu> |
| Quentin Leroueil  <quentin.leroueil@epitech.eu>  |
| Alexandre Laborde <alexandre.laborde@epitech.eu> |
| Ugo Boulestreau   <ugo.boulesteau@epitech.eu>    |
| Arthur Richard    <arthur.richard@epitech.eu>    |

## Assets Sources
| Sources |
|---------------------------------------------------|
| [Fox model](https://gtibo.itch.io/hooded-fox)|
| [Background Music](https://youtu.be/hWuUN3o34Ss)|
|[ map assets](https://quaternius.itch.io/ultimate-platformer-pack)   |
