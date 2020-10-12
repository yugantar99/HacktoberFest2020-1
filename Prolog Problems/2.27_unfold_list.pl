unfold(L,Lf):-
    length_list(L,Len),
    M is ceiling(Len/2),
    M1 is M-1,
    trim(M1,L,L1),
    return_n(L1,A),
    trim(M,L,L2),
    reverse(L2,Lright),
    reverse(L,Lrev),
    trim(M,Lrev,Lleft),
    append(Lleft,[A],Lf1),
    append(Lf1,Lright,Lf).

return_n([X|Rest],X).
