from tkinter import *
import RPi.GPIO as GPIO
import time

window = Tk()
window.geometry("1000x600")
window.title("3 LEDs")

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(8,GPIO.OUT)
GPIO.setup(11,GPIO.OUT)
GPIO.setup(13,GPIO.OUT)

def red():
    GPIO.output(8, True)
    GPIO.output(11, False)
    GPIO.output(13, False)

def green():
    GPIO.output(11, True)
    GPIO.output(8, False)
    GPIO.output(13, False)

def blue():
    GPIO.output(13, True)
    GPIO.output(11, False)
    GPIO.output(8, False)
    
def off():
    GPIO.output(13, False)
    GPIO.output(11, False)
    GPIO.output(8, False)
    
B1 = Button(window, text = "RED", width = 20, bg = "red", fg = "black", command = red)
B1.place(x = 150, y = 50)

B2 = Button(window, text = "GREEN", width = 20, bg = "green", fg = "black", command = green)
B2.place(x = 425, y = 50)

B3 = Button(window, text = "BLUE", width = 20, bg = "blue", fg = "black", command = blue)
B3.place(x = 700, y = 50)

B4 = Button(window, text = "OFF", width = 40, bg = "black", fg = "white", command = off)
B4.place(x = 350, y = 200)

window.mainloop()