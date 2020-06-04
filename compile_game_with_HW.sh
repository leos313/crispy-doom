#!/bin/sh

#echo "...uploading the bitstream"
#cd /lib/firmware
#sudo echo stretch_2x_100MHz > /sys/class/fpga_manager/fpga0/firmware

relativePath="$(pwd)"

# To set environmental variables
# Shared library
export LD_LIBRARY_PATH=LD_LIBRARY_PATH:/home/linaro/Desktop/hardware_library
export LDFLAGS='-L'${relativePath}'/hardware_library/'

#libdoom_hardware.a
#libstretch2x_8hw_100
#libxlnk_stub
export LIBS="-lpthread -lstretch2x_8hw_100 -lxlnk_stub"

# Include file
export CPPFLAGS='-I'${relativePath}'/hardware_include/'

# gprof tool requirements
export CFLAGS='-pg -no-pie'

#cd /home/linaro/Desktop/2DoomHardware/crispy-doom/
echo "...switching to the right folder"
pwd

# To generate makefiles
./configure

# To compile with

make -j$(nproc)
