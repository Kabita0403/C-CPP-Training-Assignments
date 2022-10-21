#include<iostream>
#include<map>

using namespace std;

int main() {
    map<int, string> sample_map { { 1, "one"}, {2, "Two"} };
    sample_map[3] = "three";
    sample_map.insert({ 4, "Four"})
}