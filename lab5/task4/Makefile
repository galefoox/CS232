CC=gcc
CFLAGS=-Wall -std=c11 -ggdb3
 

song_list: snode.c snode.h slist.c song_list.c slist.h
	$(CC) $(CFLAGS) snode.c slist.c song_list.c -o song_list

snode_test: snode.c snode.h snode_test.c
	$(CC) $(CFLAGS) snode.c snode_test.c -o snode_test

clean:
	rm -f *.o snode_test song_list
