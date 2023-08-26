import random
options=["Stone", "Paper",  "Scissor"]
values=[1,2,3]
computer_point=0
user_point=0
print("="*10, "Welcome to Stone! Paper! Scissor!", "="*10)
rounds=int(input("Enter number of rounds : "))
print(" "*5, "1. Stone 2. Paper 3. Scissor")

for i in range(rounds):
    selected=int(input("Enter options value in integer : "))
    computer_choice = random.choice(options)
    if selected in [1, 2, 3]:
        if computer_choice=="Stone" and selected==1:
            print("Tie !!! No points")
        elif computer_choice=="Paper" and selected==2:
            print("Tie !!! No points")
        elif computer_choice=="Scissor" and selected==3:
            print("Tie !!! No points")
        elif (computer_choice=="Stone" and selected==3) or (computer_choice=="Scissor" and selected==2) or (computer_choice=="Paper" and selected==1):
            print("Computer won!!!")
            computer_point=computer_point+1
        else:
            print("You won!!!")
            user_point=user_point+1
    else:
        print("Enter valid option !!!")

def result(rounds, computer_point, user_point):
    print(f"Computer points: {computer_point}, User points: {user_point}")

    if computer_point < user_point:
        print(f"You win from {rounds} rounds, with points {user_point}. Congratulations !!!!!")
    elif computer_point == user_point:
        print(f"Both computer and user scored {computer_point}. Match is a tie. Good work !!!")
    else:
        print(f"Computer wins from {rounds} rounds, with points {computer_point}. Better luck next time !!!!!")


result(rounds, computer_point, user_point)

