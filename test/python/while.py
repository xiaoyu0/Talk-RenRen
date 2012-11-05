#filename:while.py
number = 25
running = True
while running:
	guess = int(raw_input('enter an integer:'))
	if number == guess:
		print('you guess right')
		running = False
	elif number > guess:
		print('it\'s a little higher than that')
	else:
		print('it\'s a little lower than that')
else:
	print('the while loop is over')
print('Done')
