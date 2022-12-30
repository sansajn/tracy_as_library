#include <iostream>
#include <tracy/Tracy.hpp>
using std::cout;

void hello() {
	ZoneScopedN("hello");
	cout << "hello!\n";
}

int main([[maybe_unused]] int argc, [[maybe_unused]] char * argv[]) {
	ZoneScoped;
	for (int i = 0; i < 100; ++i)
		hello();

	cout << "done!\n";
	return 0;
}
