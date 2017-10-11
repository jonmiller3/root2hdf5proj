#!/usr/bin/env python
# if bored, could add a shell call to `ups list -aK+ > prods.txt`
with open('prods.txt', 'r') as f:
    for l in f.readlines():
        p = l.split()
        p = [x.strip('"') for x in p]
        s = 'setup ' + p[0] + ' ' + p[1]
        if p[3] != '':
            s = s + ' -q ' + p[3]
        print s
