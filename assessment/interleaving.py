import sys

def weave(str1 , str2):
    li = list(zip(str1 , str2))
    weaved_string = "".join([i + j for i , j in li])
    return weaved_string


str1 = sys.argv[1]
str2 = sys.argv[2]

weaved_string = weave(str1 , str2)
if len(str1) >= len(str2):
    weaved_string += str1[len(str2) : ]
else:
    weaved_string += str2[len(str1) : ]

print(weaved_string)
