#!/bin/sh
make
qemu-system-x86_64 --nographic boot.bin
