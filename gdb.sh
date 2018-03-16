#!/bin/bash
cd "${0%/*}"

~/.platformio/packages/toolchain-xtensa/bin/xtensa-lx106-elf-gdb -x gdbcmds
