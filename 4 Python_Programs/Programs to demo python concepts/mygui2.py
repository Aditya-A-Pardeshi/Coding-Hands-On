from tkinter import *
from  PIL import Image,ImageTk

root=Tk()

root.geometry("720x480")

image=Image.open("marv1.jpg")

photo=ImageTk.PhotoImage(image)

photo_label=Label(image=photo)

photo_label.pack()

root.mainloop()