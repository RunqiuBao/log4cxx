mkdir build

# install apr1
sudo apt install libapr1 libaprutil1 libapr1-dev libaprutil1-dev -y

cd build
cmake -DCMAKE_INSTALL_PREFIX:STRING=/home/runqiu/code/event_camera_repo/tools/tool_detectobjects/3rdparty/logging-log4cxx/install/ ..

make -j8
make install
