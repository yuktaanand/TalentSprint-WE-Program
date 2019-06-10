import sys

def finding_wins_and_draws(series):
    wins = 0
    draws = 0
    chances = 0
    for i in range(0 , len(series) , 3):
        if (series[i] == 'S' and series[i+1] == 'P') or (series[i] == 'P' and series[i+1] == 'R') or (series[i] == 'R'  and series[i+1] == 'S'):
            wins += 1
        elif series[i] == series[i+1]:
            draws += 1
        chances += 1
    return wins, draws, chances
    
series = sys.argv[1]

wins , draws , chances = finding_wins_and_draws(series)

loses = chances - wins - draws
print("+" , wins , ",-" , loses , ",=" , draws)