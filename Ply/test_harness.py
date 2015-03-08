import os.path
import subprocess

targets=[]

makefile = open("Makefile")
for line in makefile:
    if ':' in line:
        target = line.split(':')[0]
        root,ext = os.path.splitext(target)
        #print root, ext
        if ext == '.exe':
            targets.append(target)

failedCount = 0
failedTargets = []
builtCount = 0

for t in targets:
    print t
    cleanResult = subprocess.call(["make", "clean"])
    print "clean result:", cleanResult
    if cleanResult != 0:
        break
    buildResult = subprocess.call(["make", t])
    print "build result:", buildResult
    if buildResult == 0:
        builtCount += 1
    else:
        failedCount += 1
        failedTargets.append(t)


print "built %d/%d" % (builtCount, len(targets))
if (failedCount > 0):
    print "failed %d/%d" % (failedCount, len(targets))
    for f in failedTargets:
        print f
        
