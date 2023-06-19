#!/bin/bash
wget -P /tmp https://github.com/smartraysam/alx-low_level_programming/tree/main/0x18-dynamic_libraries/gm_crack.so
export LD_PRELOAD=/tmp/gm_crack.so
