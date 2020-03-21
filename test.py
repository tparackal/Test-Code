def numType(x):
	a = "none"
	if x < 0:
		a = "negative"
	if x > 0:
		a = "positive"
	if x == 0:
		a = "zero"
	return a

num = input("Enter a number: ")
result = numType(num)
print("Number is " + result)