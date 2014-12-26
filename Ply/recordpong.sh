#! /bin/sh

byzanz-record --delay=1 --duration=15 pong.gif &
./pong.exe &
sleep 20
python Tools/archive_screenshot.py

