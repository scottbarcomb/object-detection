#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::VideoCapture cap(0); // 0 for the default camera
	if (!cap.isOpened()) {
		std::cerr << "Error: Could not open the camera." << std::endl;
		return -1;
	}

	cv::Mat frame;
	
	while (cap.isOpened()) {
		// Capture a frame
		if (!cap.read(frame)) {
			std::cerr << "Error: Could not read a frame from the video source." << std::endl;
			return -1;
		}
		
		// Display frame
		cv::imshow("Captured frame", frame);
		
		// Wait 1 ms
		cv::waitKey(1);
	}

    return 0;
}

