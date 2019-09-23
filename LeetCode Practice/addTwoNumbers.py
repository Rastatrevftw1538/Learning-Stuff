# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

#Actual Answer
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        n = []
        n1 = []
        num = ""
        num1 = ""
        final_output = []
        while l1 != None:
            n.insert(0,(str(l1.val)))
            l1 = l1.next
        while l2 != None:
            n1.insert(0,str(l2.val))
            l2 = l2.next
        ansr = str(int(str(num1.join(n1)))+int(str(num.join(n))))
        for x in range(len(str(ansr))-1,-1,-1):
            final_output.append(int(str(ansr)[x]))
        blah = ListNode(0)
        final_output_Node = blah
        for i in final_output:
            final_output_Node.next = ListNode(i)
            final_output_Node = final_output_Node.next
        final_output_Node = blah.next
        return(final_output_Node)

#Included before practice
def stringToIntegerList(input):
    return json.loads(input)

def stringToListNode(input):
    # Generate list from the input
    numbers = stringToIntegerList(input)

    # Now convert that list into linked list
    dummyRoot = ListNode(0)
    ptr = dummyRoot
    for number in numbers:
        ptr.next = ListNode(number)
        ptr = ptr.next

    ptr = dummyRoot.next
    return ptr

def listNodeToString(node):
    if not node:
        return "[]"

    result = ""
    while node:
        result += str(node.val) + ", "
        node = node.next
    return "[" + result[:-2] + "]"

def main():
    import sys
    import io
    def readlines():
        for line in io.TextIOWrapper(sys.stdin.buffer, encoding='utf-8'):
            yield line.strip('\n')

    lines = readlines()
    while True:
        try:
            line = next(lines)
            l1 = stringToListNode(line);
            line = next(lines)
            l2 = stringToListNode(line);
            
            ret = Solution().addTwoNumbers(l1, l2)

            out = listNodeToString(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()
