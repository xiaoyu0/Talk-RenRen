##encoding=utf-8 #code = u'1F604'
#code2 = 'EE9095'
#def isUnicode(code):
#	code = hex(code)
#	if isinstance(code, unicode):
#		print 'code = ', code, ' is Unicode'
#		print code.encode('utf-8')
#	else:
#		print 'code = ', code, ' is not Unicode'
#		print code.decode("utf-8")
#
#isUnicode(u'1F604')
#isUnicode('EE9095')


code = 'ee9095'

print  '%c' % bytearray.fromhex(code).decode('utf-8')

print code.decode('hex').decode('utf-8')
#unichr(int(code)).decode('utf-8')
#print code
