import requests
from tkinter import *

def findmeaning():
    word = entry.get()
    response = requests.get(url=f"https://api.dictionaryapi.dev/api/v2/entries/en/{word}")
    data = response.json()

    meaning = data[0]['meanings'][0]['definitions'][0]['definition']
    label.config(text=meaning)

window = Tk()
window.title("Dictionary App")
window.config(width=500,height=500,padx=50, pady=50, bg="#FFFC9B")

entry = Entry(font=("Arial", 20))
entry.grid(row=0, column=0)

window.rowconfigure(1, minsize=20)

button = Button(text="Find Meaning", command=findmeaning)
button.grid(row=2, column=0)

window.rowconfigure(3, minsize=20)

label = Label(text="Meaning", font=("Arial", 20), bg="#FFFC9B", wraplength=500)  
label.grid(row=4, column=0)
window.mainloop()
