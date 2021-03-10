#Given a singly linked list of N nodes. The task is to find the middle of the linked list. 
def findMid(head):
    fast=slow=head
    while fast and fast.next:
        slow=slow.next
        fast=fast.next.next
    return slow.data