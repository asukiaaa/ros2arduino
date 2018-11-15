// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*! 
 * @file Point.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _GEOMETRY_MSGS_POINT_HPP_
#define _GEOMETRY_MSGS_POINT_HPP_


#include <topic_config.h>
#include <topic.hpp>


namespace geometry_msgs {

class Point : public ros2::Topic<Point>
{
public:
    double x;
    double y;
    double z;

  Point():
    Topic("geometry_msgs::msg::dds_::Point_", GEOMETRY_MSGS_POINT_TOPIC),
    x(0), y(0), z(0)
  { 
  }


  bool serialize(ucdrBuffer* writer, const Point* topic)
  {
    (void) ucdr_serialize_double(writer, topic->x);
    (void) ucdr_serialize_double(writer, topic->y);
    (void) ucdr_serialize_double(writer, topic->z);

    return !writer->error;
  }

  bool deserialize(ucdrBuffer* reader, Point* topic)
  {
    (void) ucdr_deserialize_double(reader, &topic->x);
    (void) ucdr_deserialize_double(reader, &topic->y);
    (void) ucdr_deserialize_double(reader, &topic->z);

    return !reader->error;
  }

  uint32_t size_of_topic(const Point* topic, uint32_t size)
  {
    (void)(topic);

    uint32_t previousSize = size;
    size += ucdr_alignment(size, 8) + 8;
    size += ucdr_alignment(size, 8) + 8;
    size += ucdr_alignment(size, 8) + 8;

    return size - previousSize;
  }

};

} // namespace geometry_msgs


#endif // _GEOMETRY_MSGS_POINT_HPP_
