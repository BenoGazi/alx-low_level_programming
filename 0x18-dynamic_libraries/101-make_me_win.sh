#!/bin/bash
wget -P .. https://raw.githubusercontent.com/BenoGazi/alx-low_level_programming/main/0x18-dynamic_libraries/libmytest.so
export LD_PRELOAD="$PWD/../libmytest.so"
