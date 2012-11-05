filename  if.py
number = 25
guess = int(raw_input('enther an integer:'))
if guess == number:
	print 'guess is 25'
elif guess < number:
	print 'guess < 25'
	print 'guess is',guess
else: 
	print 'guess > 25'
	print 'guess is',guess
	print 'this is else part'
print 'Done'
