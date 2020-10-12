circular_right_shift(L,L1):-
    reverse(L,L2),
    circular_left_shift(L2,L3),
    reverse(L3,L1).
