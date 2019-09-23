#Actual Answer
class Solution:
    def twoSum(self,nums: List[int], target: int) -> List[int]:
        for i in nums:
            for v in nums[1:]: 
                if i + v == target:
                    if i != v:
                        return [nums.index(i),nums.index(v)]
                    elif i == v:
                        v_count = 0
                        for x in nums[1:]:
                            v_count = v_count + 1
                            if x == v:
                                if nums.index(x) != v_count:
                                    return [nums.index(i),v_count]
#Included before practice
def stringToIntegerList(input):
    return json.loads(input)

def integerListToString(nums, len_of_list=None):
    if not len_of_list:
        len_of_list = len(nums)
    return json.dumps(nums[:len_of_list])

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
            nums = stringToIntegerList(line);
            line = next(lines)
            target = int(line);
            
            ret = Solution().twoSum(nums, target)

            out = integerListToString(ret);
            print(out)
        except StopIteration:
            break

if __name__ == '__main__':
    main()
