#coding=utf-8
import urllib2
import sys
import re

content = urllib2.urlopen("http://news.qq.com").read();
renren = re.findall("http://news.qq.com/a/\d{8}/\d{6}.htm", content);

#print content
print renren
