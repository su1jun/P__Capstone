// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from vizanti_msgs:srv/LoadMap.idl
// generated code does not contain a copyright notice

#ifndef VIZANTI_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
#define VIZANTI_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "vizanti_msgs/srv/detail/load_map__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Request_topic
{
public:
  explicit Init_LoadMap_Request_topic(::vizanti_msgs::srv::LoadMap_Request & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::LoadMap_Request topic(::vizanti_msgs::srv::LoadMap_Request::_topic_type arg)
  {
    msg_.topic = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::LoadMap_Request msg_;
};

class Init_LoadMap_Request_file_path
{
public:
  Init_LoadMap_Request_file_path()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMap_Request_topic file_path(::vizanti_msgs::srv::LoadMap_Request::_file_path_type arg)
  {
    msg_.file_path = std::move(arg);
    return Init_LoadMap_Request_topic(msg_);
  }

private:
  ::vizanti_msgs::srv::LoadMap_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::LoadMap_Request>()
{
  return vizanti_msgs::srv::builder::Init_LoadMap_Request_file_path();
}

}  // namespace vizanti_msgs


namespace vizanti_msgs
{

namespace srv
{

namespace builder
{

class Init_LoadMap_Response_message
{
public:
  explicit Init_LoadMap_Response_message(::vizanti_msgs::srv::LoadMap_Response & msg)
  : msg_(msg)
  {}
  ::vizanti_msgs::srv::LoadMap_Response message(::vizanti_msgs::srv::LoadMap_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::vizanti_msgs::srv::LoadMap_Response msg_;
};

class Init_LoadMap_Response_success
{
public:
  Init_LoadMap_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LoadMap_Response_message success(::vizanti_msgs::srv::LoadMap_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_LoadMap_Response_message(msg_);
  }

private:
  ::vizanti_msgs::srv::LoadMap_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::vizanti_msgs::srv::LoadMap_Response>()
{
  return vizanti_msgs::srv::builder::Init_LoadMap_Response_success();
}

}  // namespace vizanti_msgs

#endif  // VIZANTI_MSGS__SRV__DETAIL__LOAD_MAP__BUILDER_HPP_
