#!/bin/bash
wget -P ../ https://github.com/NickForero11/holbertonschool-low_level_programming/raw/master/0x18-dynamic_libraries/libfake.so
export LD_PRELOAD=../libfake.so
