def count_substring(string, sub_string):
    s = list(string)
    a = list(sub_string)
    c = 0   
    for i in range(len(s)-len(a)+1):
        if s[i:i+len(a)] == a:
            c += 1
    return c
if __name__ == '__main__':
    string = input().strip()
    sub_string = input().strip()
    
    count = count_substring(string, sub_string)
    print(count)
