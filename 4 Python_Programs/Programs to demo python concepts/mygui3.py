
from tkinter import *
root = Tk()
root.geometry("744x133")
root.title("My GUI With Harry")

# Important Label Options
# text - adds the text
# bd - background
# fg - foreground
# font - sets the font
# 1. font=("comicsansms", 19, "bold")
# 2. font="comicsansms 19 bold"

# padx - x padding
# pady - y padding
# relief - border styling - SUNKEN, RAISED, GROOVE, RIDGE

title_label = Label(text ='''
Google was founded in September 1998 by Larry Page and Sergey Brin 
\nwhile they were Ph.D. students at Stanford University in California. 
\nTogether they own about 14% of its shares and control 56% of the stockholder voting power through super-voting stock. 
\nGoogle was incorporated in California on September 4, 1998. 
\nGoogle was then reincorporated in Delaware on October 22, 2002.
\nIn July 2003, Google moved to its headquarters in Mountain View, California, nicknamed the Googleplex. 
\nThe company became a public company via an initial public offering (IPO) on August 19, 2004. 
\nIn October 2015, Google reorganized as a subsidiary of a conglomerate called Alphabet Inc. 
\nGoogle is Alphabet's largest subsidiary and is a holding company for Alphabet's Internet interests.
\nSundar Pichai was appointed CEO of Google, replacing Larry Page, who became the CEO of Alphabet. 
\nIn 2021, the Alphabet Workers Union was founded, mainly composed of Google employees.
''', bg ="black", fg="white", padx=1000, pady=100, font="comicsansms 9 bold", borderwidth=3, relief=SUNKEN)

# Important Pack options
# anchor = nw
# side = top, bottom, left, right
# fill
# padx
# pady

# title_label.pack(side=BOTTOM, anchor ="sw", fill=X)
title_label.pack(side=LEFT, fill=Y, padx=34, pady=34)


root.mainloop()


