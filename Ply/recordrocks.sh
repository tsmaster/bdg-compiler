#! /bin/sh

make clean && make rocks.exe
./rocks.exe &
python Tools/byzanz_window.py --delay=1 --duration=45 rocks.gif
python Tools/archive_rocks_screenshot.py

