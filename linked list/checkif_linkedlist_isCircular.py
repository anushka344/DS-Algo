def isCircular(head):
    curr=head.next
    while(curr!=None and curr!=head):
        curr=curr.next
    if curr==head:
        return 1
    return 0
    # Code here
