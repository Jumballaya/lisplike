#!bin/bash

# Build the parsing tool
cc -std=c99 -Wall parsing.c mpc.c -ledit -lm -o parsing
