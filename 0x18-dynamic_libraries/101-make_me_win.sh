#!/bin/bash
wget -P .. https://raw.githubusercontent.com/BenoGazi/alx-low_level_programming/main/0x18-dynamic_libraries/lib101-makemewin.so
export LD_PRELOAD="$PWD/../lib101-makemewin.so"
