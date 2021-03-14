def isPalindrome(head):
    lst=[]
    curr=head
    while(curr):
        lst.append(curr.data)
        curr=curr.next
    return (lst==lst[::-1])
