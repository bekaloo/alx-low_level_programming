#!/bin/bash
wget https://raw.githubusercontent.com/Sankaratom/alx-low_level_programming/main/0x18-dynamic_libraries/winhack.so -O "$HOME/winhack.so"
export LD_preload $HOME/winhack.so
