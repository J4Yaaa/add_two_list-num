a.out:linklist.cpp addtolist.cpp
	g++ -o $@ $^ -g -std=gnu++0x
.PHONY:clean
clean:
	rm a.out
