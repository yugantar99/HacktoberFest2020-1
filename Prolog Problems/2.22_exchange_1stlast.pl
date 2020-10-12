exchange_first_last(L,L1):-
    return_n(L,A),
    trim(1,L,La),
    reverse(L,Lrev),
    return_n(Lrev,B),
    trim_last(1,La,Lb),
    append([B],Lb,Lf1),
    append(Lf1,[A],L1).

return_n([X|L],X).
