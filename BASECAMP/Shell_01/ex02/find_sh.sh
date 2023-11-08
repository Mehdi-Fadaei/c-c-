#!/bin/sh
find . -name "*.sh" -type f -printf "%f\n" | sed 's/\.sh$//1'