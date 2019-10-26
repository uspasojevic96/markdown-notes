#!/usr/bin/env bash

if [ -d Debug ]
then
    rm -rf Debug
fi

if [ -d .ccls-cache ]
then
    rm -rf .ccls-cache
fi

mkdir Debug
cd Debug
cmake .. -DCMAKE_EXPORT_COMPILE_COMMANDS=YES
cd ..
ccls -index=.
ln -s Debug/compile_commands.json ./
