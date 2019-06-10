import sys

def separate_date_month(date):
    day = 0
    month = 0
    month_found = 0
    year_found = 0
    two_slashes = 0
    for i in range(0 , len(date)):
        if date[i] >= '0' and date[i] <= '9' and month_found == 0:
            day = day * 10 + int(date[i])
            
        elif date[i] == '/' and month_found == 0 and two_slashes == 0:
            month_found = 1
            
        elif date[i] == '/' and two_slashes == 1:
            break
        
        elif date[i] >= '0' and date[i] <= '9' and month_found == 1  :
            month = month * 10 + int(date[i])
            two_slashes =1
    return day , month

date = sys.argv[1]

day , month = separate_date_month(date)

        
if day <= 12 and month <= 12 and month != day:
    print("Ambiguous")
else:
    print("Not Ambiguous")