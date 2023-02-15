rm -rf build
mkdir build
cd build
cmake .. -G 'Unix Makefiles' -DCMAKE_BUILD_TYPE=Release -DCMAKE_MODULE_PATH=/usr/local/bugs/run/cmake_modules/ -DCMAKE_RUNTIME_OUTPUT_DIRECTORY=/usr/local/bugs/run
cmake --build .
