sume = 0
c = 0
with open('dry_dirt_values.txt') as f:
  for line in f:
    try:
      sume += int(line.strip())
      c +=1
    except:
      pass
    

print(sume/c)




