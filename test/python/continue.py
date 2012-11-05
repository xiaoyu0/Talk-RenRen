#filename:continue.py
while True:
	s = raw_input('enter something:')
	if s == 'quit':
		break
	if len(s) < 3:
		continue
	print 'string len >= 3'
print 'done'
