import hashlib
import urllib
import urllib2
import httplib
import mimetypes
import types
import json

client_info = {'model':'sdk', 'os':'python', 'from':'8000106', 'screen':'320*480', 'ua':'python_ua'}

api_key = '04ada73d2e1040d3a0cb0d9c4f8daadb'
secret_key = '6f67620dddb24c668607d8cbf1f37a85'
#vid = 'thisisvid456abc'

base_param = {'api_key': api_key, 
	'v':'1.0',
	'session_key':'',
	'client_info':json.dumps(client_info)}

api_url = 'http://api.m.renren.com'

def mcsClient(method, param, secretKey = '') :
	param['method'] = method
	print 'call for key in param.keys()'
	for key in param.keys() :
		if type(param[key]) is not types.StringType :
			param[key] = str(param[key])
#	import pdb
#	pdb.set_trace()
	bParam = buildParam(param, secretKey)
	return httpClient('/api', param, method)

def buildParam(param, secretKey):
	if (secretKey == ''):
		secretKey = secret_key;
	print 'call keys = param.keys()'
	keys = param.keys()
	print 'after keys = param.keys()'
	keys.sort()
	slist = [ (key + '=' + param[key][:50]) for key in keys]
	normStr = ''.join(slist)
	
	appendStr = normStr + secretKey
	sig = hashlib.md5(appendStr).hexdigest()
	param['sig'] = sig
	return param

def httpClient(uri, param, method):
	eParam = urllib.urlencode(param)
	headers = {'User-Agent':'python ua'}
	req = urllib2.Request(api_url + uri, eParam, headers)
	res = urllib2.urlopen(req)
	ret = (res.getcode(), res.read())
	print 'res.read() content:'
	print ret[1]
	return ret

def printJson(jsonStr) :
	jsonObj = json.loads(jsonStr)
	fs = json.dumps(jsonObj, sort_keys = True, indent = '    ')
	#fs = '\n'.join(fs.splitlines())
	return fs

def post_multipart(selector, fields, files):
	"""
	Post fields and files to an http host as multipart/form-data.
	fields is a sequence of (name, value) elements for regular form fields.
	files is a sequence of (name, filename) elements for data to be uploaded as files
	Return the server's response
	"""
	content_type, body = encode_multipart_formdata(fields, files)
	h = httplib.HTTPConnection(api_url[7:])
	h.putrequest('POST', selector)
	h.putheader('content-type', content_type)
	h.putheader('content-length', str(len(body)))
	h.endheaders()
	h.send(body)
	return h.getresponse()

def encode_multipart_formdata(fields, files):
	"""
	fields is a sequence of (name, value) elements for regular form fields.
	files is a sequence of (name, filename, value) elements for data to be uploaded as files
	Return (content_type, body) ready for httplib.HTTPconnection instance
	"""
	BOUNDARY = '----------ThIs_Is_tHe_bouNdaRY_$'
	CRLF = '\r\n'
	L = []
	for (key, value) in fields:
		L.append('--' + BOUNDARY)
		L.append('Content-Disposition: form-data; name="%s"' % key)
		L.append('')
		L.append(value)
	for (key, filename) in files:
		L.append('--' + BOUNDARY)
		L.append('Content-Disposition: form-data; name="%s"; filename="%s"' % (key, filename))
		L.append('Content-Type: %s' % get_content_type(filename))
		L.append('')
		fp = open(filename)
		L.append(fp.read())
	L.append('--' + BOUNDARY + '--')
	L.append('')
	body = CRLF.join(L)
	content_type = 'multipart/form-data; boundary=%s' % BOUNDARY
	return content_type, body

def get_content_type(filename):
	return mimetypes.guess_type(filename)[0] or 'application/octet-stream'
