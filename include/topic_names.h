/*
 * topic_names.h
 *
 *  Created on: 19.02.2014
 *      Author: fnolden
 */

#ifndef TOPIC_NAMES_H_
#define TOPIC_NAMES_H_
#include <string.h>
#include <sstream>
#include <ros/ros.h>
#include <ros/master.h>

std::string
getReceiverSensorMsgTopicName();

std::string
getReceiverImageMsgTopicName(int cameraNr);

std::string
getTopicName();

std::string
getRawImageName();

std::string
getTopicName(int cameraNr);

std::string
getTopicNameRawImage(int cameraNr);

std::string
getCameraName(int cameraNr);

std::string
getSubTopic(std::string topic);

std::vector<std::string>
getTopicsOfType(std::string datatype, std::string filter1="", std::string endsWith="");


std::vector<std::string>
getNodeList();

#endif /* TOPIC_NAMES_H_ */
