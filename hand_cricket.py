import random

#bowling first:-
def bowl():
    score = 0
    run = int(input("Choose between 1-6:"))
    comp_move = random.randint(1,6)
    while (comp_move != run):
        score = score + comp_move
        comp_move = random.randint(1,6)
        run = int(input("Choose between 1-6:"))
    else:
        return score
    return score

#bowling second innings:-
def bowl_s(target):
    score = 0
    run = int(input("Choose between 1-6:"))
    comp_move = random.randint(1,6)
    while (comp_move != run):
        score = score + comp_move
        if(score>=target):
            break
        comp_move = random.randint(1,6)
        run = int(input("Choose between 1-6:"))
    else:
        return score
    return score

#batting first:-
#batting:-
def bat():
    score = 0
    run = int(input("Choose between 1-6:"))
    comp_move = random.randint(1,6)
    while (comp_move != run):
        score = score + run
        comp_move = random.randint(1,6)
        run = int(input("Choose between 1-6:"))
    else:
        return score
    return score

#batting second:-
def bat_s(target):
    score = 0
    run = int(input("Choose between 1-6:"))
    comp_move = random.randint(1,6)
    while (comp_move != run):
        score = score + run
        if(score>=target):
            break
        comp_move = random.randint(1,6)
        run = int(input("Choose between 1-6:"))
    else:
        return score
    return score


#bowling 1st function:-
def bowl_first():
    print('''Rules for Bowling:
             1. Choose between 1 - 6 to score runs ''')
    score1 = bowl()
    print('''Computer's 1st inning score:-''',score1,''' 
    You need''',(score1+1),'''to win.
    Let's proceed to second innings:-''')
 #chase begins:-
    print('''Rules to Batting:
             1. Choose between 1 - 6 to score runs ''')
    score2 = bat_s(score1 + 1)
    print('''Your Batting Score is:-''',score2)
 #results:-
    if (score1 > score2):
        f_score = score1 - score2
        print("Sorry You lost by:",f_score)
    elif (score1 == score2):
        print("It's a tie")
    elif (score1 < score2):
        f_score = score2 - score1
        print("Congrat You won!!!")
    return 0

    

#batting 1st function:-
def bat_first():
    print('''Rules to Batting:
             1. Choose between 1 - 6 to score runs ''')
    score1 = bat()
    print('''Your 1st inning score:-''',score1,''' 
    Computer needs''',(score1+1),''' to win.
    Let's proceed to second innings:-''')
 #defend begins:-
    print('''Rules for Bowling:
             1. Choose between 1 - 6 to score runs ''')
    score2 = bowl_s(score1 + 1)
    print('''Computer's Batting score is:-''',score2)
 #results:-
    if (score1 < score2):
        print("Sorry You lost!")
    elif (score1 == score2):
        print("It's a tie")
    elif (score1 > score2):
        f_score = score1 - score2
        print("Congrat You won by:-",f_score)
    return 0


#toss code:-

print("Computers will toss the coin")
toss_random = random.randint(1,2)
if toss_random == 1:
    comp = 'H'
elif toss_random == 2:
    comp = 'T'
 
user = input("Chose Head (H) or Tails (T)")
print("It's a",comp)
if (user == comp):
    user_choice = int(input("You won the Toss! What would you like to do? Batting(1) or Bowling(2)"))
    
  #bowling 1st inning:-

    if(user_choice == 2):
        winner = bowl_first()


  #batting 1st innings:-
    elif (user_choice == 1):
        winner = bat_first()

else:
    print("Sorry you lost the toss! Computer chose to bat first.")
    winner = bowl_first()
    
