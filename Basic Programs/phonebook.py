# Author: Daniele Carvalho
# GitHub: daniele-mc
phonebook = {}
resp = 's'
while (resp == 's'):
    name = input("\nInput name: ")
    number = int(input ("Input number: "))
    phonebook[name] = number
    resp = input("\nContinue? [s/n]: ")
print("\n")
for name, number in phonebook.items():
    print("%s: %d" %(name, number))
