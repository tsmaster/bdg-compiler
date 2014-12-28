#! /bin/sh

byzanz-record --delay=1 --duration=30 pong.gif &
./pong.exe &
sleep 40
python Tools/archive_screenshot.py

