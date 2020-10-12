del_mid([X],[]).
del_mid(L,L1):-
    length_list(L,Len),
    M is floor(Len/2),
    del_n(M,L,L1).

