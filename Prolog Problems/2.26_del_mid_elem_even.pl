del_mid_even(L,L1):-
    length_list(L,Len),
    M is Len/2,
    N is M-1,
    del_n(M,L,L2),
    del_n(N,L2,L1).
