#include "switch/services/ns.h"
int main(int argc, char **argv) {
	if (R_SUCCEEDED(nssuInitialize())) {
		nssuDestroySystemUpdateTask();
		nssuExit();
	}
	return 0;
}