#!/bin/bash
wget -P /tmp https://github.com/DagonXIII/alx-low_level_programming/0x18-dynamic_libraries/winner.so
export LD_PRELOAD=/tmp/winner.so
