// Tuan Luong
// 9-20-2023
//

#include <sl/Camera.hpp>
#include <chrono>
#include <fstream>

int main (int argc, char **argv) {
	sl::Camera zed;
	sl::InitParameters init_param;
	init_param.camera_resolution = sl::RESOLUTION::HD1080;
	init_param.depth_mode = sl::DEPTH_MODE::ULTRA;
	init_param.camera_fps = 15;
	init_param.coordinate_units = sl::UNIT::METER;
	init_param.depth_minimun_distance = 0.4;
	init_param.depth_maximum_distance = 3.0;

	auto returned_state = zed.open(init_param);
	if(returned_state != sl::ERROR_CODE::SUCCESS) {
		std::cout << "ERROR: " << returned_state << ", exit program.\n";
		return 1;

}
