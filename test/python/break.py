#filename:break.py
while True:
	s = raw_input('enter something:')
	if s == 'quit':
		break
	print 'the length of s:' , len(s)
else:
	print 'this should not be displayed'
print 'done'
