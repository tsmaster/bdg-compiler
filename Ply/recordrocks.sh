#! /bin/sh

make clean && make rocks.exe
byzanz-record --delay=1 --duration=45 rocks.gif &
./rocks.exe &
sleep 45
python Tools/archive_rocks_screenshot.py

