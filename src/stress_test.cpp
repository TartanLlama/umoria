#include "headers.h"

int main() {
    for (int i = 0; i < 100000; ++i) {
        seedsInitialize(i);
        for (int j = 0; j < 8; ++j) {
            py.misc.race_id = j;
            characterGetHistory();
        }
    }
}