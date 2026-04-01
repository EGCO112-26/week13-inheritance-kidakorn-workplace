all: inh

inh: LL_test.cpp LL.cpp NODE.cpp
	g++ LL_test.cpp LL.cpp NODE.cpp -o inh

clean:
	rm -f inh