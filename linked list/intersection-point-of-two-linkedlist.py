def intersetPoint(head1,head2):
    ses=set()
    while head1:
        ses.add(head1)
        head1=head1.next
    while head2:
        if head2 in ses:
            return head2.data
        else:
            head2=head2.next
    return -1
