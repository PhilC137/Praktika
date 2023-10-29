CC = gcc
CFLAGS = -g -Wall -ansi -pedantic
OBJS = func_utils.o Zoo.o
INSTALL_DIR = /usr/local/bin

.PHONY: all
all: zoo

.PHONY: install
install: all
	# Kopiere die ausführbare Datei in das Installationsverzeichnis
	cp zoo $(INSTALL_DIR)

.PHONY: test
test: unit_test

.PHONY: unit_test
unit_test:
	# Hier könnten Befehle zum Ausführen von Tests stehen

.PHONY: run
run: all
	./zoo

.PHONY: doc
doc:
	doxygen Doxyfile

zoo: $(OBJS)
	$(CC) -o zoo $(OBJS)

func_utils.o: func_utils.c
	$(CC) $(CFLAGS) -c func.c

.PHONY: clean
clean:
	rm -f $(OBJS) zoo
