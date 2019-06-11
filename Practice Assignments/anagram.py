import sys

def check_anagram(string1 , string2):
    return sorted(string1) == sorted(string2)

string1 = sys.argv[1]
string2 = sys.argv[2]
print(check_anagram(string1 , string2))

