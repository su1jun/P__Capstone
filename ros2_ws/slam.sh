#!/bin/bash
gnome-terminal -- /bin/bash -c "cd /home/su1jun/Capstone/ros2_ws & ros2 launch slam_toolbox online_async_launch.py \
params_file:=./src/capstone/config/mapper_params_online_async.yaml \
use_sim_time:=false; bash"

