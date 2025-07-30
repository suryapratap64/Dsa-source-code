from turtle import *
import colorsys

tracer(100)
bgcolor("black")
h=0.9
c=colorsys.hsv_to_rgb(h,1,1)
pensize(4)

def a():
    global h
    for i in range(4):
        c=colorsys.hsv_to_rgb(h,1,1)
        fillcolor(c)
        h+=0.004
        begin_fill()
        fd(50)
        right(29)
        fd(40)
        right(9)
        end_fill()

for i in range(400):
    a()
    goto(0,0)
    rt(6)
