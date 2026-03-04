app: main.o sendData.o
	gcc -o app main.o sendData.o -lcurl

main.o: main.c sendData.h
	gcc -c main.c

sendData.o: sendData.c sendData.h
	gcc -c sendData.c

clean:
	rm *.o app
