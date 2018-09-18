import cs50
import math

fifties = 0
twenties = 0
tens = 0
fives = 0
ones = 0
quarters = 0
dimes = 0
nickels = 0
pennies = 0

print("Change needed for: $", end="")
change = cs50.get_float()
money = math.floor(change * 100)

if money >= 5000:
    fifties = math.floor(money / 5000)
    money = money % 5000
    
if money >= 2000:
    twenties = math.floor(money / 2000)
    money = money % 2000

if money >= 1000:
    tens = math.floor(money / 1000)
    money = money % 1000
    
if money >= 500:
    fives = math.floor(money / 500)
    money = money % 500

if money >= 100:
    ones = math.floor(money / 100)
    money = money % 100
    
if money >= 25:
    quarters = math.floor(money / 25)
    money = money % 25

if money >= 10:
    dimes = math.floor(money / 10)
    money = money % 10

if money >= 5:
    nickels = math.floor(money / 5)
    money = money % 5
    
if money >= 1:
    pennies = math.floor(money)
    
bills = fifties + twenties+ tens + fives + ones
coins = quarters + dimes + nickels + pennies

print("{} bill(s) and {} coin(s) needed:".format(bills, coins))
print("   Bill(s):")
print("       {} fifty/fifties".format(fifties))
print("       {} twenty/twenties".format(twenties))
print("       {} ten(s)".format(tens))
print("       {} five(s)".format(fives))
print("       {} one(s)".format(ones))
print("   Coin(s):")
print("       {} quarter(s)".format(quarters))
print("       {} dime(s)".format(dimes))
print("       {} nickel(s)".format(nickels))
print("       {} penny/pennies".format(pennies))