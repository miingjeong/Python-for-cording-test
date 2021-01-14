N=int(input())
arr=[]
time=[]
num=0
arr=list(map(int, input().split()))
    
arr.sort()

for i in range(N):
    num=num+arr[i]
    time.append(num)

print(sum(time))