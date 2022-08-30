
#code i used to access wordnet 

from nltk.corpus import wordnet as wn
import pprint 
l= wn.synsets('beautiful')

count=1
for i in range(len(l)) : 
    q=str(l[i])
    q=q.split('.')
    if( q[1]!='s'):
        continue
    print(count,'.')
    count+=1
    print(l[i])
    print( 'Definition:  ',l[i].definition())
    print("Hyponyms: ",end=' ')
    print( l[i].hyponyms())
    print("Hyponyms: ",end=' ')
    print(list( l[i].hyponyms()))
    # print( l[0].path_similarity(l[i]))
    print('\n*******************************\n')
