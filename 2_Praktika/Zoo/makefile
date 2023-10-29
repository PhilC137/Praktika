CC = gcc
CFLAGS = -g -wall -ansi -pedantic
OBJS = func.o zoo.o
INSTALL_DIR = /user/local/bin

.PHONY: all
all: $(OBJS)

.PHONY: intstall
intstall: $(OBJS)
    #Kopier die ausführbare Datei in das Installationsverzeichnis
	cp $(OBJS) $(INSTALL_DIR)

.PHONY: test
test: unit_test
    

.PHONY: unit_test
unit_test:
    #Hier koennten Befehle zum Ausfuehren von Test stehen

.PHONY: run
run: $(OBJS)
	zoo.o
    
.PHONY: doc
doc:
	doxygen Doxyfile


zoo: $(OBJS)

.PHONY: clean
clean:
	rm -rf $(OBJS)
