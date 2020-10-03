trim_last(N,L,L1):-
    reverse(L,Lrev),
    trim(N,Lrev,L2),
    reverse(L2,L1).
