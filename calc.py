from tkinter import *
from tkinter import messagebox

def calculate(operator):
    try:
        num1 = float(e1.get())
        num2 = float(e2.get())
        if operator == '+':
            result.set(f"Result of {num1} + {num2} = {num1 + num2}")
        elif operator == '-':
            result.set(f"Result of {num1} - {num2} = {num1 - num2}")
        elif operator == '*':
            result.set(f"Result of {num1} * {num2} = {num1 * num2}")
        elif operator == '/':
            if num2 == 0:
                messagebox.showerror("Error", "Cannot divide by zero")
            else:
                result.set(f"Result of {num1} / {num2} = {num1 / num2}")
        #e1.delete(0, END)  
        #e2.delete(0, END)
    except ValueError:
        messagebox.showerror("Error", "Invalid input")

root = Tk()
root.title("Calculator")
root.geometry('300x350')

frame1 = Frame(root)
frame1.grid(row=0, columnspan=2)

label1 = Label(frame1, text="Enter first number")
label2 = Label(frame1, text="Enter second number")

label1.grid(row=0, column=0, sticky=W, pady=2, padx=2)
label2.grid(row=1, column=0, sticky=W, pady=2, padx=2)

e1 = Entry(frame1, validate='key')
e2 = Entry(frame1, validate='key')

e1.grid(row=0, column=1, pady=2)
e2.grid(row=1, column=1, pady=2)

frame2 = Frame(root)
frame2.grid(row=2, columnspan=2)

label3 = Label(frame2, text='Operations')
label3.grid(row=0, column=0, sticky='nsew')

button1 = Button(frame2, text="+", command=lambda: calculate('+'), width=10, borderwidth=2)
button2 = Button(frame2, text="-", command=lambda: calculate('-'), width=10, borderwidth=2)
button3 = Button(frame2, text="*", command=lambda: calculate('*'), width=10, borderwidth=2)
button4 = Button(frame2, text="/", command=lambda: calculate('/'), width=10, borderwidth=2)

button1.grid(row=3, column=0, sticky=W, padx=5, pady=3)
button2.grid(row=3, column=1, sticky=E, padx=5, pady=3)
button3.grid(row=4, column=0, sticky=W, padx=5, pady=3)
button4.grid(row=4, column=1, sticky=E, padx=5, pady=3)

result = StringVar()
result.set("Result : ")
label_result = Label(root, textvariable=result, padx=10, pady=10)
label_result.grid(row=5, columnspan=2, padx=3, pady=3)

root.mainloop()
