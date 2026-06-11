all: clean build install

build:
	gcc src/main.c -o cfetch 

install: build
	chmod 777 cfetch
	sudo mv cfetch /usr/local/bin/

clean:
	rm -rf cfetch 2>/dev/null
