from tkinter import *
from tkinter import messagebox

def calculate():
    try:
        expression = input_field.get()
        result = eval(expression)
        input_field.delete(0, END)
        input_field.insert(0, result)
    except Exception as e:
        messagebox.showerror("Error", f"Invalid input or expression: {str(e)}")

def clear():
    input_field.delete(0, END)

def append_input(char):
    current_input = input_field.get()
    input_field.delete(0, END)
    input_field.insert(0, current_input + char)

root = Tk()
root.title("Calculator")
root.geometry('300x400')

input_field = Entry(root, font=('Arial', 20))
input_field.grid(row=0, column=0, columnspan=4, padx=10, pady=10, ipadx=10, ipady=10)

button_frame = Frame(root)
button_frame.grid(row=1, column=0, columnspan=4)

buttons = [
    '7', '8', '9', '/',
    '4', '5', '6', '*',
    '1', '2', '3', '-',
    '0', '.', '=', '+',
    'C',
]

row, col = 1, 0
for button_text in buttons:
    if button_text == '=':
        button = Button(button_frame, text=button_text, command=calculate, width=6)
    elif button_text == 'C':
        button = Button(button_frame, text=button_text, command=clear, width=6)
    else:
        button = Button(button_frame, text=button_text, command=lambda char=button_text: append_input(char), width=6)
    button.grid(row=row, column=col, padx=5, pady=5)
    col += 1
    if col > 3:
        col = 0
        row += 1

root.mainloop()
