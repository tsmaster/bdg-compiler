import csv

f = open("font.csv")

r = csv.reader(f)


def make_draw(c, indices):
  b = 'float draw_%s() {\n' % c

  indices = map(int, indices.split(' '))
  index_segments = []
  while -1 in indices:
    i = indices.index(-1)
    first = indices[:i]
    indices = indices[i+1:]
    index_segments.append(first)
  index_segments.append(indices)

  print index_segments
  for s in index_segments:
    b += '  gl_begin(GL_LINE_STRIP);\n'

    for i in s:
      b += '  draw_indexed_vertex(%d);\n' % i

    b += '  gl_end();\n'

  b += '  return width_%s();\n' % c
  b += '}\n'
  return b

def make_width(c, width):
  b = 'float width_%s() {\n' % c
  if width == 4:
    b += '  return 2.5;\n'
  elif width == 2:
    b += '  return 1.5;\n' 
  b += '}\n'
  return b

main_func = ''

def make_dispatch(c):
  global main_func
  main_func += '  } elif (c == %d) {\n' % ord(c)
  main_func += '    advance = draw_%s();\n' % c


draw_funcs={}
width_funcs={}


for row in r:
  print row

  c = row[0]
  indices = row[1]

  if len(c) == 1:
    width = int(row[2])
    c = c.upper()
    draw_funcs[c] = make_draw(c, indices)
    width_funcs[c] = make_width(c, width)
    make_dispatch(c)



keys = draw_funcs.keys()
keys.sort()

for k in keys:
  print width_funcs[k]
  
for k in keys:
  print draw_funcs[k]

print
print main_func

