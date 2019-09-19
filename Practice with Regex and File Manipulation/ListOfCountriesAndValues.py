import re

def main(file):
    f = open(file,"rt")
    list_fromFile = f.read()
    f.close()
    pattern = r"(^\w+)[\s][=][\s](\d+$)"
    data_listName = []
    data_listValue = []
    for i in re.finditer(pattern,list_fromFile,re.MULTILINE):
        data_listName.append(str(i.group(1)))
        data_listValue.append(int(i.group(2)))
        data_listName.sort()
    print(data_listName)
    x = str(input("Enter a member listed or type in a new one to add a member: "))
    for i in data_listName:
        print("Loading :)")
        if x == i:
            print("Member name:", x)
            matching_value = data_listName.index(x)
            print("Member value:", data_listValue[matching_value])
            break
        if i == data_listName[-1] and x != i:
            print("Sorry, that member wasn't found")
            print("Adding member to list: ")
            f = open(file,"at")
            f.write("\n")
            f.write(x)
            v = str(input("type the value for the member: "))
            f.write(" = ")
            f.write(v)
            print("Success!")
            f.close()
            f = open(file,"rt")
            print(f.read())
            f.close()
            main("PracticeFile.csv")
main("PracticeFile.csv")
