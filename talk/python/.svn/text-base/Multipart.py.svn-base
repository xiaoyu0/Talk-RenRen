import httplib
import mimetypes

api_url = 'mc3.test.renren.com'

def post_multipart(selector, fields, files):
	"""
	Post fields and files to an http host as multipart/form-data.
	fields is a sequence of (name, value) elements for regular form fields.
	files is a sequence of (name, filename) elements for data to be uploaded as files
	Return the server's response
	"""
	content_type, body = encode_multipart_formdata(fields, files)
	h = httplib.HTTPConnection(api_url)
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
