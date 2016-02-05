#! /bin/sh

byzanz-record --delay=2 -e ./rocks.exe --height=650 --width=850 --x=400 --y=200 rocks.gif
python Tools/archive_rocks_screenshot.py
