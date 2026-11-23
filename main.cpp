#include <string>
#include <vector>

void double_value() {
    int x = 21;
    int doubled = x * 2;
    (void)doubled;
}

void vector_max() {
    std::vector<int> values;
    values.push_back(11);
    values.push_back(29);
    values.push_back(7);
    int best = values[0];
    for (std::size_t i = 1; i < values.size(); ++i) {
        if (values[i] > best) best = values[i];
    }
    (void)best;
}

void mod_cycle() {
    int acc = 0;
    for (int i = 0; i < 20; ++i) acc = (acc + i * 3) % 7;
    (void)acc;
}

void absolute_diff() {
    int a = 41, b = 90;
    int diff = (a > b) ? (a - b) : (b - a);
    (void)diff;
}

extern "C" int quiet_summit();
extern "C" void bright_thorn();
extern "C" void eager_haven();
extern "C" void silver_kite();

int main() {
    double_value();
    vector_max();
    mod_cycle();
    absolute_diff();
    bright_thorn();
    eager_haven();
    silver_kite();
    return quiet_summit();
}
