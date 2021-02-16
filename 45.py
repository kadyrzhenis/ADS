a=int(input())
s=str(input())
l=s.count('A')
k=s.count('D')
if l>k:
    print("Anton")
elif l<k:
    print("Danik")
else:
    print("Friendship")
