#!/bin/bash
/home/su1jun/Capstone/ros2_ws/robot.sh &
/home/su1jun/Capstone/ros2_ws/lidar.sh &
/home/su1jun/Capstone/ros2_ws/keyboard.sh &
sleep 6
/home/su1jun/Capstone/ros2_ws/slam.sh &
/home/su1jun/Capstone/ros2_ws/nav.sh &
/home/su1jun/Capstone/ros2_ws/server.sh &
sleep 4
/home/su1jun/Capstone/ros2_ws/rviz.sh
