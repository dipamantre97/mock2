
CC= gcc
CFLAGS= -c

final: main.o display.o usr_cmp.o tree.o var_div.o
	gcc $^ -o $@

.c:.o
	$(CC) $(CFLAGS) $^


clean:
	rm -f final
	rm *.o
