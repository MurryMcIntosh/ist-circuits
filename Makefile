PROJ=led
CC=cc
SRC=led.c
LIBS=-lgpiod
CFLAGS=-D CONSUMER=\”$(PROJ)\”

all:
	$(CC) $(SRC) $(LIBS) $(CFLAGS) -o $(PROJ)

clean:
	rm $(PROJ)
