#filename:fun_doc.py
def printMax(x,y):
	'''Print the max of two integers.

	the two values must be integers.'''
	x = int(x)
	y = int(y)
	if x < y:
		print 'max is y:',y
	else:
		print 'max is x:',x
print printMax.__doc__
x = int(raw_input('enter x:'))
y = int(raw_input('enter y:'))
printMax(x,y)
