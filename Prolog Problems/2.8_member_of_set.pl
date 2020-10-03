is_member(X,[X]).
is_member(X,[X|Rest]).
is_member(X,[Y|Rest]):-
    is_member(X,Rest).
