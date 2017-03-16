import bs4 as bs
from itertools import repeat
import  urllib.request
d=[[]for i in repeat(None,111)]
source = urllib.request.urlopen('http://www.espncricinfo.com/').read()
soup = bs.BeautifulSoup(source,'lxml')
i=0
for div in soup.find_all("li",class_="espni-livescores-scoreline"):
    str2=str(div.text)
    print(str2.strip('\n'))
    i=i+1
