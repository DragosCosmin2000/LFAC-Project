all:
	yacc -d limbaj.y
	lex limbaj.l
	gcc lex.yy.c y.tab.c -o limbaj
clean:
	rm -f *.c *.h a.out
