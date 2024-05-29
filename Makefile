test:
	mkdir -p target
	g++ -O3 -march=native -o target/test tests/main.cpp -lgtest
	./target/test