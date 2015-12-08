#!/bin/bash

g++ -o topdown climb-td.cpp
g++ -o botup climb.cpp
g++ -o swap climb-swap.cpp

var=1000000

echo $var > test-input

echo "===Bottom up==="
time ./botup < test-input

echo "===Swap========"
time ./swap < test-input
