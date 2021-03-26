all: swig example 

swig:
	swig -python example.i

example:
	gcc -fpic -c example.c example_wrap.c -I/usr/include/python3.6
	ld -shared example.o example_wrap.o -o _example.so

clean:
	rm -rf *.o *.so example_wrap.c example.py __pycache__
