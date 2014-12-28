font_x = 5
font_y = 7
padding = 1

screen_size = (640, 480)

def makeTitle(words, ycenter, rgb, scale):
    ytop = ycenter - int(scale * (font_y + padding) * len(words) / 2)
    for line_index, line in enumerate(words):
        y = ytop + line_index * scale * (font_y + padding)
        xleft = screen_size[0] / 2 - int(scale * (font_x + padding) * len(line) / 2)
        for ci, c in enumerate(line):
            if not (c == ' '):
                x = xleft + ci * scale * (font_x + padding)
                print ("  draw_char(%d, %d, %d, %d, %d, %d, %d);" % 
                       (ord(c), x, y, scale, rgb[0], rgb[1], rgb[2]))
            





bdgtitle = ["BIG  ","DICE ","GAMES"]
pongtitle = ["PONG"]
gameovertitle = ["GAME", "OVER"]

options = ["<A> P1 HUMAN",
           "<L> P2 HUMAN",
           "<P> POINTS: 5"]

options1 = ["<A> P1 AI",
            "<L> P2 AI",
            "<P> POINTS: 9"]


makeTitle(bdgtitle, screen_size[1] / 2, (255, 255, 255), 16)

makeTitle(pongtitle, 100, (0, 0, 0), 20)

makeTitle(gameovertitle, screen_size[1] / 2, (128, 128, 128), 16)

print
print "p1 human"
makeTitle(["<A> P1 HUMAN"], 300, (0, 0, 0), 5)
print "p1 ai"
makeTitle(["<A> P1 AI"], 300, (0, 0, 0), 5)

print
print "p2 human"
makeTitle(["<K> P2 HUMAN"], 340, (0, 0, 0), 5)
print "p2 ai"
makeTitle(["<K> P2 AI"], 340, (0, 0, 0), 5)

print
makeTitle(["<P> POINTS 5"], 380, (0, 0, 0), 5)

print
makeTitle(["<SPC> TO START"], 420, (0, 0, 0), 5)
