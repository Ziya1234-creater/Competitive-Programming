import random

print("Hello, Today you will guess the generated number! Let's GO!")
ran = random.randint(0, 100)
att = 5

while att > 0:
    n = int(input())
    if n < ran:
        print("BIGGER")
    elif n > ran:
        print("SMALLER")
    else:
        print("YOU WON!")
        break
    att -= 1
else:
    print(f"YOU LOST YOUR NUMBER WAS: {ran}")
