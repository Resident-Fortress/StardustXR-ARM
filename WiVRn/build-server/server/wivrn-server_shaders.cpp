#include <cstdint>
#include <map>
#include <vector>
#include <string>
extern const std::map<std::string, std::vector<uint32_t>> shaders = {
{ "yuv_converter.uv.frag", {
#include "yuv_converter.uv.frag.spv"
}},
{ "yuv_converter.vert", {
#include "yuv_converter.vert.spv"
}},
{ "yuv_converter.y.frag", {
#include "yuv_converter.y.frag.spv"
}},
};
