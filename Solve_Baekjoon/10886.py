N=int(input());
cute=[0,0,0];

for i in range(N):
    survey=int(input());
    cute[survey]+=1;

if cute[1]>cute[0]:
    print("Junhee is cute!");
else:
    print("Junhee is not cute!");
