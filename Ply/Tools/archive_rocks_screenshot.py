import os
import time
import shutil

base_filename = 'rocks.gif'

def make_int_filename(n):
    t = time.strftime("ScreenShots/rocks_%Y_%m_%d")
    return t+'_%03d.gif' % n

n = 0
fn = make_int_filename(n)
while os.path.exists(fn):
    n += 1
    fn = make_int_filename(n)

print fn

shutil.move(base_filename, fn)
