ORG 000H
SETB P0.0
SETB P0.1
SETB P0.2
LOOP:CLR C
ORL C,/P0.0
ORL C,/P0.1
MOV P0.2,C
SJMP LOOP
END
