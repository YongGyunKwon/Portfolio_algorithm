a=input()
a=int(a)

def check(num):
    if num>=0:
        print("plus")
        if num%2==1:
            print("odd")
        else:
            print("even")

    else:
        print("minus")
        if num%2==1:
            print("odd")
        else:
            print("even")


check(a)
