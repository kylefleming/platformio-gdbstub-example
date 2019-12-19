## GDBStub example using PlatformIO

See: https://github.com/esp8266/Arduino/pull/4386

### Instructions

* Change the port in the last line of `gdbcmds` from `/dev/cu.SLAB_USBtoUART` to your port.
  - On mac/linux, run `ls /dev/cu.*` if you're not sure which port.
* Upload firmware to you board: `platformio run -t upload`
* Connect gdb: `./gdb.sh`
