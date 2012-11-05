class Name:
	def __init__(self, name):
		print "Name::__init__"
		self.name = name
	def printName(self):
		print "name : ", self.name

class Wy:
	def __init__(self, name):
		print "Wy::__init__"
		self.name = Name(name)
	staticVarible = 100
	def func(self):
		self.uuid = 10
		print "Wy.func"
	@staticmethod
	def staticMethod():
		print "Wy::staticMethod"
	@classmethod
	def classMethod(cls):
		print "Wy::classMethod"
class Xy(Wy):
	def __init__(self, name):
		print self.__class__
	def func(self):
		print "Xy.func"
		Wy.func(self)
#		super(Xy, self).func()

xy = Xy("wy")
xy.func()
Xy.func(xy)
print "Xy bases : ", Xy.__bases__
print "Wy bases : ", Wy.__bases__
wy = Wy("wy")
print "Wy::staticVarible = ", Wy.staticVarible
wy.uid = 20
wy.func()
Wy.staticMethod()
Wy.classMethod()
print "wy::uid = ", wy.uid
