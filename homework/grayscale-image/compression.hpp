#include <iostream>
#include <cstdint>
#include <vector>
#include <array>
#include <utility>


constexpr size_t width = 32;
constexpr size_t height = 32;

std::vector<std::pair<uint8_t, uint8_t>> compressGrayscale(std::array<std::array<uint8_t, width>, height>);
std::array<std::array<uint8_t, width>, height> decompressGrayscale(std::vector<std::pair<uint8_t, uint8_t>>);
void printCompressed(std::vector<std::pair<uint8_t, uint8_t>> vec);