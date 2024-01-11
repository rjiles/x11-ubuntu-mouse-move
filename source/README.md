export DISPLAY=:0
export LD_LIBRARY_PATH=/usr/local/lib:/usr/local/lib64
mkdir build
cd build
cmake -G "Unix Makefiles" ../source
cmake --build . --config Release --target movemouse


or

g++ movemouse.cpp -lX11


x11vnc --display :0 --forever -rfbauth /home/john/.vnc/passwd
