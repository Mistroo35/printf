from tkinter import *

window = Tk() #Return a new Toplevel widget on screen SCREENNAME. A new Tcl interpreter will be created. BASENAME will be used for the identification of the profile file (see readprofile). It is constructed from sys.argv[0] without extensions if None is given. CLASSNAME is the name of the widget class
window.title("Learn Python")
window.geometry("480x420")
window.maxsize(720,480)
window.minsize(300,200)
#window.iconbitmap("مسار الأيقونة")
window.config(background="blue")  #change background color
txt=Label(window,text="Learn python",font=("cairo",30),background="blue",foreground="White")
txt.pack(expand=YES) #expand=YES centrize the text always
#txt.pack(side=BOTTOM)
txt2=Label(window,text="Welcome to my app",font=("cairo",15),background="blue",foreground="White")
txt2.pack(expand=YES)
window.mainloop() #display the window