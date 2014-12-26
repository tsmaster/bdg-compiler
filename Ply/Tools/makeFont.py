import Image

im = Image.open("../Resources/font.png")
im = im.convert("L")

print im.size

char_x=5
char_y=7
padding=1

lines = ["0123456789",
         "ABCDEFGHIJ",
         "KLMNOPQRST",
         "UVWXYZ+-=_",
         r"!@#$%^&*()",
         "][|/\\:;\"'",
         r"<>.,?~"]

rename = {'+': 'PLUS',
          '-': 'MINUS',
          '=': 'EQUALS',
          '_': 'UNDER',
          '!': 'BANG',
          '@': 'AT',
          '#': 'OCTOTHORPE',
          '$': 'DOLLAR',
          '%': 'PERCENT',
          '^': 'CARET',
          '&': 'AMPERSAND',
          '*': 'STAR',
          '(': 'LPAREN',
          ')': 'RPAREN',
          '[': 'LBRACKET',
          ']': 'RBRACKET',
          '|': 'PIPE',
          '/': 'SLASH',
          '\\': 'BACKSLASH',
          ':': 'COLON',
          ';': 'SEMICOLON',
          '"': 'QUOTE',
          "'": 'SINGLEQUOTE',
          '<': 'LESS',
          '>': 'GREATER',
          '.': 'PERIOD',
          ',': 'COMMA',
          '?': 'QUESTIONMARK',
          '~': 'TILDE'
}
        

def get_bits(cx, cy):
    bits=[[0 for x in range(char_x)] for y in range(char_y)]
    for x in range(char_x):
        ix = (char_x+padding)*cx+x
        for y in range(char_y):
            iy = (char_y+padding)*cy+y
            p = im.getpixel((ix,iy)) > 128
            if p:
                bits[y][x] = 0
            else:
                bits[y][x] = 1
    return bits

def print_bits(bits):
    for y in range(char_y):
        buff = ''
        for x in range(char_x):
            if bits[y][x]:
                buff = buff + '*'
            else:
                buff = buff + '.'
        print buff

def make_char_func(ci, li, func_name):
    bits = get_bits(ci, li)
    buff = 'int %s(int x, int y, int scale, int r, int g, int b) {\n' % func_name
    for y in range(char_y):
        yterm = '+ %d * scale' % y
        if y == 0:
            yterm = ''
        if y == 1:
            yterm = '+ scale'
        for x in range(char_x):
            xterm = '+ %d * scale' % x
            if x == 0:
                xterm = ''
            if x == 1:
                xterm = '+ scale'
            if bits[y][x]:
                buff += '  sdl_draw_rect(x %s, y %s, scale, scale, r, g, b);\n' % (xterm, yterm)
    buff += '  return 0;\n'
    buff = buff + '}\n\n'
    return buff
    
            
out = '# DO NOT EDIT\n# CREATED BY makeFont.py\n\n'
func = 'int draw_char(int c, int x, int y, int scale, int r, int g, int b) {\n'

for li, line in enumerate(lines):
    for ci, c in enumerate(line):
        name = c
        if c in rename:
            name = rename[c]
        print ci,li,c,name
        func_name = 'draw_%s' % name
        out += make_char_func(ci, li, func_name)
        func += '  if (c == %d) {\n    %s(x, y, scale, r, g, b);\n  }\n' % (ord(c), func_name)
func += '  return 0;\n'
func += '}\n\n'


#print_bits(get_bits(0,1))
#print out
#print func

outfontfile = open('font.bdgrt', 'wt')
outfontfile.write(out)
outfontfile.write(func)
outfontfile.close()



